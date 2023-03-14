#include <bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

class Solution {
public:
    long long ans;

    long long solve(vector<vector<int>>&adj,vector<int>&vis,int node,int seats){
        vis[node] = 1;
        long long cnt = 1;
        for(auto it : adj[node]){
            if(!vis[it]){
            cnt+=solve(adj,vis,it,seats);
            }
        }

        long long x = cnt/seats;
        if(cnt%seats) x++;
        if(node!=0) ans+=x;
        return cnt;

    }

    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n = roads.size();
        if(n==0){
            return 0;
        }
        ans=0;
        // Creating a adjacency matrix
        vector<vector<int>> adj(n+1);

        for(int i =0;i<n;i++){
            adj[roads[i][0]].push_back(roads[i][1]);
            adj[roads[i][1]].push_back(roads[i][0]);

        }

        vector<int> visited(n+1,0);
        solve(adj,visited,0,seats);
        return ans;

    }
};