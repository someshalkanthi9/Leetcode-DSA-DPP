#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0) return 0;
        sort(points.begin(),points.end());

        int lastpoint = points[0][1];
        int ans = 1;

        for(auto s : points){
            if(s[0] > lastpoint){
            ans++;
            lastpoint = s[1];
            }

            lastpoint = min(s[1],lastpoint);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}