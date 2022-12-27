class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i == j || i+j == n-1)
                {
                    if(grid[i][j] == 0)
                    {
                        return false;
                    }
                }
                else
                {
                    if(grid[i][j] != 0)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};