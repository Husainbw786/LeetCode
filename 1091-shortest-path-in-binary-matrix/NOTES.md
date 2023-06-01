q.push({{0,0},dis[0][0]});
while(!q.empty())
{
int i = q.front().first.first;
int j = q.front().first.second;
int d = q.front().second;
q.pop();
for(int k=0;k<8;k++)
{
int row = i + delrow[k];
int col = j + delcol[k];
if(row>=0 && row<n && col>=0 && col<m && grid[row][col]==0 && dis[row][col]>1+d)
{
dis[row][col] = 1+d;
q.push({{row,col},dis[row][col]});
}
}
}
if(dis[n-1][m-1] == 1e9)
{
return -1;
}
return dis[n-1][m-1];
}
};
}