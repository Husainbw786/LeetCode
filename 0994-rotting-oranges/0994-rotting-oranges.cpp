class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
     
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        queue<pair<int,int>>q;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({i,j});
                }
            }
        }
        int count = 0; 
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                
                if(x+1 < n && grid[x+1][y] == 1)
                {
                    grid[x+1][y] = 2;
                    q.push({x+1,y});
                }
                if(x-1 >= 0 && grid[x-1][y] == 1)
                {
                    grid[x-1][y] = 2;
                    q.push({x-1,y});
                }
                if(y+1 < m && grid[x][y+1] == 1)
                {
                    grid[x][y+1] = 2;
                    q.push({x,y+1});
                }
                if(y-1 >= 0 && grid[x][y-1] == 1)
                {
                    grid[x][y-1] = 2;
                    q.push({x,y-1});
                }
            }
            count++;
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
        if(count == 0)
        {
            return 0;
        }
        return count-1;
    }
};