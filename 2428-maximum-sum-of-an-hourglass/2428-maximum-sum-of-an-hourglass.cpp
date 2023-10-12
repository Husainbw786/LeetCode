class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
     
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        int maxi = 0;
        for(i=0;i<n-2;i++)
        {
            for(j=0;j<m-2;j++)
            {
                int sum = grid[i][j] + grid[i][j+1] + grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j] 
                    + grid[i+2][j+1] + grid[i+2][j+2];
                maxi = max(sum,maxi);
            }
        }
        return maxi;
    }
};