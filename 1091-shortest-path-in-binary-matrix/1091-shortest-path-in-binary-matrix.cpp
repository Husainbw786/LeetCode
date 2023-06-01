class Solution {
public:
    
    bool check(int i, int j,vector<vector<int>>& grid)
    {
        if(i >= 0 && j >= 0 && i < grid.size() && j < grid[0].size() && grid[i][j] == 0)
        {
            return true;
        }
        return false;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dis(n,vector<int>(m,INT_MAX));
        
        if(grid[0][0] == 1 || grid[n-1][m-1] == 1)
        {
            return -1;
        }
        
        queue<pair<pair<int,int>,int>>q;
        dis[0][0] = 1;
        q.push({{0,0},dis[0][0]});
        while(!q.empty())
        {
            int i = q.front().first.first;
            int j = q.front().first.second;
            int d = q.front().second;
            q.pop();
            
            if(check(i+1,j,grid))
            {
                if(dis[i+1][j] > d+1)
                {
                    dis[i+1][j] = d+1; 
                    q.push({{i+1,j},dis[i+1][j]});
                }
                
            }
            if(check(i-1,j,grid))
            {
                if(dis[i-1][j] > d+1)
                {
                    dis[i-1][j] = d+1; 
                    q.push({{i-1,j},dis[i-1][j]});
                }
                
            }
            if(check(i,j+1,grid))
            {
                if(dis[i][j+1] > d+1)
                {
                    dis[i][j+1] = d+1; 
                    q.push({{i,j+1},dis[i][j+1]});
                }
                
            }
            if(check(i,j-1,grid))
            {
                if(dis[i][j-1] > d+1)
                {
                    dis[i][j-1] = d+1; 
                    q.push({{i,j-1},dis[i][j-1]});
                }
                
            }
            if(check(i+1,j+1,grid))
            {
                if(dis[i+1][j+1] > d+1)
                {
                    dis[i+1][j+1] = d+1; 
                    q.push({{i+1,j+1},dis[i+1][j+1]});
                }
                
            }
            if(check(i+1,j-1,grid))
            {
                if(dis[i+1][j-1] > d+1)
                {
                    dis[i+1][j-1] = d+1; 
                    q.push({{i+1,j-1},dis[i+1][j-1]});
                }
                
            }
            if(check(i-1,j+1,grid))
            {
                if(dis[i-1][j+1] > d+1)
                {
                    dis[i-1][j+1] = d+1; 
                    q.push({{i-1,j+1},dis[i-1][j+1]});
                }
                
            }
            if(check(i-1,j-1,grid))
            {
                if(dis[i-1][j-1] > d+1)
                {
                    dis[i-1][j-1] = d+1; 
                    q.push({{i-1,j-1},dis[i-1][j-1]});
                }
                
            }
            
        }
        
        if(dis[n-1][m-1] == INT_MAX)
        {
            return -1;
        }
        return dis[n-1][m-1];
    }
};