#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0,j=0,res=0;
        unordered_map<int,int> mpp;

        while(j<fruits.size()){
            mpp[fruits[j]]++;

            if(mpp.size()<=2 ) res = max(res,j-i+1);
            else{
                mpp[fruits[i]]--;
                if(mpp[fruits[i]] == 0) mpp.erase(fruits[i]);
                i++;
            }

            j++;            
            
        }
return res;

    }
};
int main(){
    
    return 0;
}