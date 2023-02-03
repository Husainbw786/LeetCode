return solve(n-1,m-1,obstacleGrid,dp);
}
};
************************ *************************** *****************************
**Butom's up (Tabulation).
​
class Solution {
public:
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
int n = obstacleGrid.size();
int m = obstacleGrid[0].size();
int dp[n][m];
int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
int up = 0;
int left = 0;
if(obstacleGrid[i][j] == 1)
{
dp[i][j] = 0;
}
else if(i==0 && j == 0)
{
dp[i][j] = 1;
}
else
{
if(i > 0)
{
up = dp[i-1][j];
}
if(j > 0)
{
left = dp[i][j-1];
}
dp[i][j] = up+left;
}