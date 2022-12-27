class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
       while(k--)
       {
          vector<vector<int>>temp = grid;
           int first = grid[0][0];
           for(i=0;i<n;i++)
           {
               for(j=0;j<m-1;j++)
               {
                   temp[i][j+1] = grid[i][j];
               }
           }
           for(i=0;i<n-1;i++)
           {
               temp[i+1][0] = grid[i][m-1];
           }
           temp[0][0] = grid[n-1][m-1];
           grid = temp;
       }
      return grid;
    }
};