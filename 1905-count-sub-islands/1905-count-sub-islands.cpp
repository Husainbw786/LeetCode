class Solution {
public:
    
    void dfs(int x,int y, vector<vector<int>>& grid1, vector<vector<int>>& grid2,int &flag)
    {
        if(x < 0 || y < 0 || x >= grid2.size() || y >= grid2[0].size() || grid2[x][y] == 0)
        {
            return;
        }
        if(grid2[x][y] == 1)
        {
            if(grid1[x][y] == 0)
            {
                flag = 1; 
            }
        }
        grid2[x][y] = 0;
        dfs(x+1,y,grid1,grid2,flag);
        dfs(x-1,y,grid1,grid2,flag);
        dfs(x,y+1,grid1,grid2,flag);
        dfs(x,y-1,grid1,grid2,flag);
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
        int count = 0;
        int n = grid2.size();
        int m = grid2[0].size();
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                int flag = 0;
                if(grid2[i][j] == 1)
                {
                    dfs(i,j,grid1,grid2,flag);
                    if(flag == 0)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};