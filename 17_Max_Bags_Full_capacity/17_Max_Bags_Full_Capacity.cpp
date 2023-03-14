#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> rem;

        for(int i = 0;i<capacity.size();i++) rem.push_back(capacity[i]-rocks[i]);
        sort(rem.begin(),rem.end());
        int i = 0;
        while(additionalRocks>0 && i<capacity.size()){
            additionalRocks-=rem[i];
            i++;
        }
        return additionalRocks<0? i-1 : i;
    }
};
int main(){
    
    return 0;
}