class Solution {
public:
    
    bool isValid(int i,int j, vector<vector<int>>&grid)
    {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
        {
            return false;
        }
        return true;
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
     
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        queue<pair<int,int>>q;
        bool check_rotten = false;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({i,j});
                    check_rotten = true;
                }
            }
        }
       
        int time = 0;
        while(!q.empty())
        {
            int size = q.size();
            time++;
            while(size--)
            {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                if(isValid(x+1,y,grid) && grid[x+1][y] == 1)
                {
                    q.push({x+1,y});
                    grid[x+1][y] = 2;
                }
                if(isValid(x-1,y,grid) && grid[x-1][y] == 1)
                {
                    q.push({x-1,y});
                    grid[x-1][y] = 2;
                }
                if(isValid(x,y+1,grid) && grid[x][y+1] == 1)
                {
                    q.push({x,y+1});
                    grid[x][y+1] = 2;
                }
                if(isValid(x,y-1,grid) && grid[x][y-1] == 1)
                {
                    q.push({x,y-1});
                    grid[x][y-1] = 2;
                }
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
        if(!check_rotten)
        {
            return 0;
        }
       return time-1; 
        
    }
};