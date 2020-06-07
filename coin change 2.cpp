class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size(),sum=amount;
        int dp[2][sum+1];
        for(int i=0;i<=2;i++)
            dp[i%2][0]=1;
        for(int i=0;i<=sum;i++)
            dp[0][i]=0;
        dp[0][0]=1;
        for(int i=1;i<=n;i++){
            dp[i%2][0]=1;
            for(int j=1;j<=sum;j++){
                dp[i%2][j]=dp[(i-1)%2][j];
                
                if((j-coins[i-1])>=0){
                    
                    dp[i%2][j]+=dp[i%2][j-coins[i-1]];
                }
                    
            }
        }
        return dp[n%2][sum];
    }
};