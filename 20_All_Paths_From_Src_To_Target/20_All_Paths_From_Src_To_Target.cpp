#include <bits/stdc++.h>
using namespace std;

class Solution {
    private:
    void dfs(vector<vector<int>> &graph,vector<vector<int>>& paths , vector<int>&vis , int cur ){
        vis.push_back(cur);
            if(cur==graph.size()-1){
                paths.push_back(vis);
            }

            else{
                for(auto it : graph[cur]){
                    dfs(graph,paths,vis,it);
                }
            }

            vis.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> paths;
        vector<int> vis;
        dfs(graph,paths,vis,0);

        return paths;
    }
};


int main(){
    
    return 0;
}