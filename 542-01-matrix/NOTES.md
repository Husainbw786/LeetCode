class Solution {
public:
bool isValid(int i, int j , int m, int n)
{
if(i<0 || j<0 || i>=m || j>=n) return 0;
return 1;
}
vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
int m = matrix.size();
int n = matrix[0].size();
vector <vector<int>> ans(m, vector<int> (n,0));
vector <vector<int>> vis(m, vector<int> (n,0));
queue <pair<int,int>> q;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
if(matrix[i][j]==0) q.push({i,j}), vis[i][j]=1;
}
}
while(!q.empty())
{
pair <int,int> f = q.front();
q.pop();
int i = f.first, j = f.second;
int dist = ans[i][j];
if(isValid(i+1,j,m,n) && !vis[i+1][j]) q.push({i+1,j}),ans[i+1][j] = dist+1, vis[i+1][j]=1;
if(isValid(i-1,j,m,n) && !vis[i-1][j]) q.push({(i-1),j}),ans[i-1][j] = dist+1, vis[i-1][j]=1;
if(isValid(i,j+1,m,n) && !vis[i][j+1]) q.push({i,j+1}),ans[i][j+1] = dist+1, vis[i][j+1]=1;
if(isValid(i,j-1,m,n) && !vis[i][j-1]) q.push({i,j-1}),ans[i][j-1] = dist+1, vis[i][j-1]=1;
}
return ans;
}
};