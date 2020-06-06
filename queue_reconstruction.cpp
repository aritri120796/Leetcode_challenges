class Solution {
public:    
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n=people.size();
        sort(people.begin(),people.end());
        vector<vector<int>> x(n,vector<int>(2,-1));
        int count,j,i=0;
        while(i<n){
            count=-1,j=0;
            while(j<n){
                if(x[j][0]==-1){
                     count++;
                    if(count==(people[i][1])){
                         x[j][0]=people[i][0];
                         x[j][1]=people[i][1];
                         i++;
                         if((i==n)||(x[j][0]!=people[i][0]))
                                break;
                         }
                    else
                        j++;
                    }
                else 
                    j++;
            }           
         }
         return x;
     }
};