int maxi = INT_MIN;
for(int x =-1;x<=1;x++)
{
for(int y=-1;y<=1;y++)
{
int value = 0;
if(j1 == j2)
{
value = grid[i][j1];
}
else
{
value = grid[i][j1] + grid[i][j2];
}
value += solve(i+1,j1+x,j2+y,grid);
maxi = max(maxi,value);
}
}
return maxi;
}
int cherryPickup(vector<vector<int>>& grid) {
int n = grid.size();
int m = grid[0].size();
return solve(0,0,m-1,grid);
}
};
******************************************************************************
​
**Top-Down(Memoisation)
​
​