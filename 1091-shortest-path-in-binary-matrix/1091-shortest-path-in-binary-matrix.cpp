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
        int delrow[] = {-1,-1,0,1,1,1,0,-1};
        int delcol[] = {0,-1,-1,-1,0,1,1,1};
        dis[0][0] = 1;
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
                if(check(row,col,grid))
                {
                   if(dis[row][col] > 1+d)
                   {
                       dis[row][col] = 1+d;
                       q.push({{row,col},dis[row][col]});
                   }
                   
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