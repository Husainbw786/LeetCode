class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        int i,j;
        for(i=n-1;i>=0;i--)
        {
            for(j=m-1;j>=0;j--)
            {
                if(grid[i][j] < 0)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
        return count;
    }
};