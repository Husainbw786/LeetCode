int point = grid[day][task] + f(day-1,col,task,grid,dp);
mini = min(mini,point);
}
​
}
​
return dp[day][last] = mini;
​
}
public:
int minFallingPathSum(vector<vector<int>>& grid)
{
int n = grid.size();
int m = grid[0].size();
int ans = INT_MAX;
vector<vector<int>> dp(n,vector<int>(m+1,-1));
for(int i = 0; i<n; i++)
{
int point = f(n-1,m,m,grid,dp);
ans = min(ans,point);
}
return ans;
}
};