#include <bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}
class Solution {
public:
    int countOdds(int low, int high) {
        int odd = (high-low)/2;
        if(high%2 || low%2) odd++;

        return odd;
    }
};

/*
Way one
int cnt =0;
        for(int i=low;i<=high;i++){
            if(i%2!=0) cnt++;
        }
        return cnt;

*/