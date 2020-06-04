class Solution {
    
public:
     static bool comp(vector<int> x,vector<int> z){
        
         return (x[1]-x[0])>(z[1]-z[0]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size();
        int count=0;
        sort(costs.begin(),costs.end(),comp);
        
        for(int i=0;i<n/2;i++){
            
                count+=costs[i][0];
        }
        for(int i=n/2;i<n;i++){
                count+=costs[i][1];
        }
        
        return count;
    }
};