**Recursion
​
class Solution {
public:
int solve(int i, int j,vector<vector<int>> obstacleGrid)
{
if(i == 0 && j == 0)
{
return 1;
}
if(i < 0 || j < 0 || obstacleGrid[i][j] == 1)
{
return 0;
}
int up = solve(i-1,j,obstacleGrid);
int left = solve(i,j-1,obstacleGrid);
return up+left;
}
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
int n = obstacleGrid.size();
int m = obstacleGrid[0].size();
return solve(n-1,m-1,obstacleGrid);
}
};
******************** ******************* *********************** *****************
​
​