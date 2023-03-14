#include <bits/ stdcp++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
       int jump = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (jump == 0) return false;
            jump = max(--jump, nums[i]);
        }
        return true;
    }
};

int main(){
    
    return 0;
}