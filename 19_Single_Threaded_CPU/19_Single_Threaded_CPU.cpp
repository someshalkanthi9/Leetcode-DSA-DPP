#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
typedef pair<long long, long long> pi;
    vector<int> getOrder(vector<vector<int>>& tasks) { 
        vector<pair<long long,pair<long long,int>>> op;
        for(int i=0;i<tasks.size();i++){  
           op.push_back(make_pair(tasks[i][0],make_pair(tasks[i][1],i)));    
        }
        sort(op.begin(),op.end());
        long currTime = op[0].first;
        //maintaining index 
        int idx =1 ;
        priority_queue<pi, vector<pi>, greater<pi> > pq;
        //min heap acc to processing time and idx
        pq.push(op[0].second);
        vector<int> ans;
        while(!pq.empty()){      
            pair<int,int> o = pq.top();
            pq.pop();
            ans.push_back(o.second);
            currTime = tasks[o.second][1] + currTime;
            while(idx<tasks.size() and op[idx].first<=currTime){
                pq.push(op[idx].second);
                idx++;
            }
            if(pq.empty() and idx<tasks.size()){
                currTime = op[idx].first;
                pq.push(op[idx].second);
                idx++;    
            }              
        }
        return ans; 
    }
};


int main(){
    
    return 0;
}