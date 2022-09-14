class Solution {
public:
    bool isValid(int i, int j, int m ,int n)
    {
        if(i<0 || j<0 || i>=n || j>=m) return 0;
        return 1;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int count=0;
        int i,j;
        queue <pair<int,int>> q;
        for( i=0;i<n;i++)
        {
            for( j=0;j<m;j++)
            {
                if(grid[i][j] == 2) q.push({i,j});
            }
        }
        
        while(!q.empty())
        {
            int sz = q.size();
            while(sz--)
            {
                i = q.front().first;
                j = q.front().second;
                q.pop();
                                 
                if(isValid(i+1,j,m,n) && grid[i+1][j]==1)
                {
                    q.push({i+1,j});
                    grid[i+1][j]=2;
                }
                if(isValid(i-1,j,m,n) && grid[i-1][j]==1)
                {
                    q.push({i-1,j});
                    grid[i-1][j]=2;
                }
                if(isValid(i,j+1,m,n) && grid[i][j+1]==1)
                {
                    q.push({i,j+1}); 
                    grid[i][j+1]=2;
                }
                if(isValid(i,j-1,m,n) && grid[i][j-1]==1)
                {
                    q.push({i,j-1});
                    grid[i][j-1]=2;
                }
            }
            if(!q.empty())
            {
                count++;
            }
        }
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    count=-1;
                }
            }
        }
        
     return count;   
    }
};