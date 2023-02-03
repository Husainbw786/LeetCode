int daigonal = triangle[i][j] + solve(i+1,j+1,triangle,dp);
return dp[i][j] = min(daigonal,down);
}
int minimumTotal(vector<vector<int>>& triangle) {
int n = triangle.size();
vector<vector<int>>dp(n,vector<int>(n,-1));
return solve(0,0,triangle,dp);
}
};
*****************************************************************************************
​
**Tabulation(Buttom'up)
​
class Solution {
public:
int minimumTotal(vector<vector<int>>& triangle) {
int n = triangle.size();
int i=0;
int j=0;
int dp[n][n];
for(j=0;j<n;j++)
{
dp[n-1][j] = triangle[n-1][j];
}
for(i=n-2;i>=0;i--)
{
for(j=i;j>=0;j--)
{
int down = triangle[i][j] + dp[i+1][j];
int daigonal = triangle[i][j] + dp[i+1][j+1];
dp[i][j] = min(down,daigonal);
}
}
return dp[0][0];
}
};