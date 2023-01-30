#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int ,int> m;

        for(auto i : tasks){
            m[i]++;
        }
        int cnt=0;
        for(auto i: m){
            if(i.second == 1){
                return -1;
            }
            else{
                if(i.second % 3 == 0){
                    cnt+= i.second/3;                    
                }
                else{
                    while(i.second>0){
                        cnt++;
                        i.second -= 3;
                    }
                }
            }
        }
        return cnt;
    }
};
int main(){
    
    return 0;
}