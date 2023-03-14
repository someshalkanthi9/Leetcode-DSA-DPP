#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalCost=0;
        int totalGas=0;
        int n = gas.size();

        for(int i = 0;i<n;i++){
            totalCost+=cost[i];
            totalGas+=gas[i];
        }

        if(totalCost>totalGas)
            return -1;

        int startIndex=0,carFuel=0;
        for(int i=0;i<n;i++){
            if(carFuel<0){
                carFuel=0;
                startIndex=i;
            }

            carFuel+=(gas[i]-cost[i]);

        }
        return startIndex;
    }
};
int main(){
    
    return 0;
}