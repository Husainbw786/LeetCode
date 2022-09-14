class Solution {
public:
bool isValid(int i, int j, int m ,int n)
{
if(i<0 || j<0 || i>=m || j>=n) return 0;
return 1;
}
int orangesRotting(vector<vector<int>>& grid) {
int m = grid.size();
int n = grid[0].size();
int cnt=0;
queue <pair<int,int>> q;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
if(grid[i][j] == 2) q.push({i,j});
}
}
while(!q.empty())
{
int sz = q.size();
while(sz--)
{
pair<int,int> f = q.front();
q.pop();
int i = f.first, j = f.second;
if(isValid(i+1,j,m,n) && grid[i+1][j]==1) q.push({i+1,j}), grid[i+1][j]=2;
if(isValid(i-1,j,m,n) && grid[i-1][j]==1) q.push({i-1,j}), grid[i-1][j]=2;
if(isValid(i,j+1,m,n) && grid[i][j+1]==1) q.push({i,j+1}), grid[i][j+1]=2;
if(isValid(i,j-1,m,n) && grid[i][j-1]==1) q.push({i,j-1}), grid[i][j-1]=2;
}
if(!q.empty()) cnt++;
}
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
if(grid[i][j] == 1) cnt=-1;
}
}
return cnt;
}
};