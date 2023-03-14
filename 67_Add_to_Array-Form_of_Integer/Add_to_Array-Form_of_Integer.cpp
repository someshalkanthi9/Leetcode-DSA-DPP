#include <bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}


class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        int c =0;
        int i;

        for(int i=n-1;i>=0 or k>0 ; i--){
            int r = k%10;
            k/=10;

            if(i>=0){
                int res = num[i]+r+c;
                num[i] = res%10;
                c = res/10;
            }

            else{
                int res = r+c;
                num.insert(num.begin(),res%10);
                c = res/10;
            }
        }

        if(c>0){
            num.insert(num.begin(),c);
        }

        return num;
    }
};


/*
vector<int> addToArrayForm(vector<int>& num, int k) {
        long long int n = num[0];
        for(int i =1 ;i<num.size();i++){
            n = n*10+num[i];
        }

        int a = n+k;
        vector<int> ans;
        while(a){
            int x = a%10;
            ans.push_back(x);
            a/=10;
        }

        reverse(ans.begin(),ans.end());        
        return ans;

    }



*/