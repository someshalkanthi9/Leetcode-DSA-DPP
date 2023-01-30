#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    
    unordered_set<int> sets;
    
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        long long curr=0,last=0;
        
        for(int i=0;i<nums.size();i++){
            
            curr+=nums[i];
            int need = curr%k;
            
            if(sets.count(need)) return true;
            
            sets.insert(last%k);
            last = curr%k;
            
 
        }
        
        return false;
            
        
    }
};



int main(){
    
    return 0;
}