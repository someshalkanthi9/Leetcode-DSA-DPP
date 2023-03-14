#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int dfs(vector<int> *adj,int s,vector<bool> &hasApple,vector<bool>&visited){
            visited[s]=true;
            int ans = 0;
            for(int x:adj[s]){
                if(!visited[x]){
                    ans+=dfs(adj,x,hasApple,visited);
                }
            }

            if(hasApple[s]|| ans!=0)
                return 2+ans;
            
            return ans;
    }

    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<int> adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);    
        }
        
        vector<bool> visited(n);
        int ans=dfs(adj,0,hasApple,visited);
        return ans==0?0:ans-2;
    }
};

/*
class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
       // creating adjacency list
        vector<vector<int>> a(n);
        for (auto& x : edges) {
            a[x[0]].push_back(x[1]);
            a[x[1]].push_back(x[0]);
        }

        return dfs(-1, 0, a, hasApple);
    }

    int dfs(int prev, int curr, vector<vector<int>>& a, vector<bool>& hasApple) {
        int ans = 0;
        for (auto x : a[curr]) {
            if (x != prev) {
                int res = dfs(curr, x, a, hasApple);
                if (res > 0 || hasApple[x]) {
                    ans += (res + 2);
                }
            }
        }
        return ans;
    }
};
*/

int main(){
    
    return 0;
}