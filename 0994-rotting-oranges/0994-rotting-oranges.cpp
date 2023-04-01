class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        queue<pair<pair<int,int>,int>>q;
        int time = 0;
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({{i,j},0});
                }
            }
        }
        while(!q.empty())
        {
            int x = q.front().first.first;
            int y = q.front().first.second;
            int time = q.front().second;
            q.pop();
            maxi = max(time,maxi);
            if(x-1 >= 0 && grid[x-1][y] == 1)
            {
                grid[x-1][y] = 2;
                q.push({{x-1,y},time+1});
            }
            if(x+1 < n && grid[x+1][y] == 1)
            {
                grid[x+1][y] = 2;
                q.push({{x+1,y},time+1});
            }
            if(y-1 >= 0 && grid[x][y-1] == 1)
            {
                grid[x][y-1] = 2;
                q.push({{x,y-1},time+1});
            }
            if(y+1 < m && grid[x][y+1] == 1)
            {
                grid[x][y+1] = 2;
                q.push({{x,y+1},time+1});
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    return -1;
                }
            }
        }
        return maxi;
    }
};