#include <iostream>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int row = strs.size();
        int col = strs[0].size();
        int del_cnt=0;

        for(int c = 0;c<col;c++){
            for(int r = 0;r<row-1;r++){ 
                if(strs[r][c] > strs[r+1][c]){
                del_cnt++;
                break;
                }
            }
        }

        return del_cnt;
    }
};

int main(){
    
    return 0;
}