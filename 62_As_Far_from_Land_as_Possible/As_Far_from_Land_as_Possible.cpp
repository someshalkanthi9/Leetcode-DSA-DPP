#include <bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

class Solution {

/*
1.Create a copy matrix
2.While initialize store the indices of 1 into pair of queue

*/
public:
    int maxDistance(vector<vector<int>>& grid) {
        const pair<int,int> directions[4] = {{-1,0},{1,0},{0,-1},{0,1}};
        int visited [grid.size()][grid[0].size()];
        queue<pair<int,int>>q;

        for(int i =0;i<grid.size();i++){
            for(int j =0;j<grid[0].size();j++){
                visited[i][j] = grid[i][j];
                if(grid[i][j] == 1){
                    q.push({i,j});
                }                
            }  
        }

        int distance = -1;
        while(!q.empty()){
            int qsize = q.size();
            while(qsize--){
                pair<int,int> landCell = q.front();
                q.pop();
                for(pair<int,int> dir:directions){      
                    int x = landCell.first + dir.first;
                    int y = landCell.second + dir.second;

                    if(x>=0 && y>=0 && x<grid.size() && y<grid[0].size() &&visited [x][y] ==0){
                        visited[x][y] = 1;
                        q.push({x,y});
                    }

                }
            }

            distance++;
        }
        return distance ==0 ? -1 : distance;        
    }
};