#include <bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
         vector<vector<pair<int,int>>> adj(n);
        // here we have assigned 0 for red and 1 for blue 

        for(auto &it : redEdges){
            adj[it[0]].push_back({it[1],0});
        }

        for(auto &it : blueEdges){
            adj[it[0]].push_back({it[1],1});
        }

        // creating a ans vectorto store the distance from node 0 to the respective node

        vector<int>ans(n,-1);

        vector<vector<bool>>visited(n,vector<bool>(2));
        queue<vector<int>>q;

        q.push({0,0,-1}); // {node,steps,color}
        //mark 0th node as visited with both colors
        visited[0][0] = true;
        visited[0][1] = true;


        ans[0] = 0;

        while(!q.empty()){
            vector<int> curr = q.front();
            q.pop();
            int node = curr[0];
            int steps = curr[1];
            int prevColor = curr[2];

            for(auto& [neighbour,color] :adj [node]){
                if(!visited[neighbour][color] && color !=prevColor){
                    visited[neighbour][color] = true;
                    q.push({neighbour,1+steps,color});
                    if(ans[neighbour] == -1){
                        ans[neighbour] = 1+steps;

                    }
                }
            }
        }
        return ans;
    }
};