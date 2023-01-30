#include <bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}
class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum =0;
        int maxSum = INT_MIN;
        int minSum = INT_MAX;
        int currMax = 0;
        int currMin = 0;

        for(auto i : nums){
            currMax = max(i,currMax+i);
            maxSum = max(maxSum,currMax);
            currMin = min(i,currMin+i);
            minSum = min(minSum,currMin);
            totalSum+=i;
        }

        if(maxSum>0) return max(maxSum,totalSum-minSum);
        else return maxSum;

    }
};