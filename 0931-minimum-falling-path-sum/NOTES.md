return 1e9;
}
if(i==0)
{
return matrix[0][j];
}
if(dp[i][j] != -1)
{
return dp[i][j];
}
int u =  matrix[i][j] + solve(i-1,j,matrix,dp);
int ld = matrix[i][j] + solve(i-1,j-1,matrix,dp);
int rd = matrix[i][j] + solve(i-1,j+1,matrix,dp);
return dp[i][j] = min(u,min(ld,rd));
}
int minFallingPathSum(vector<vector<int>>& matrix) {
int n = matrix.size();
int m = matrix[0].size();
int mini = INT_MAX;
vector<vector<int>>dp(n,vector<int>(m,-1));
for(int j=0;j<m;j++)
{
mini = min(mini,solve(n-1,j,matrix,dp));
}
return mini;
}
};
*************************************************************************************
​
**Buttom's Up(Tabulation)
​
class Solution {
public:
int minFallingPathSum(vector<vector<int>>& matrix) {
int n = matrix.size();
int m = matrix[0].size();
int i,j;
int dp[n][m];
for(j=0;j<m;j++)