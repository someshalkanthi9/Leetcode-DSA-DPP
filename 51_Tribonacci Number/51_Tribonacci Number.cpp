#include <bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

class Solution {
public:
    int tribonacci(int n) {
        if(n==0 || n==1) return n;
        if (n==2) return 1;

        int a[n+1];

        a[0] = 0;
        a[1] = 1;
        a[2] = 1;

        for(int i = 3;i<=n;i++){
            a[i] = a[i-1]+a[i-2]+a[i-3];
        }

    return a[n];


    }
};
/*
if(n==0) return 0;
        int curr = 0;
        int prev = 1;
        int prev2 = 1;
        int prev3 = 0;

        for(int i = 3;i<=n;i++){
            int curr = prev+prev2+prev3;
            prev3 = prev2;
            prev2 = prev;
            prev = curr;
        }

        return prev;

*/