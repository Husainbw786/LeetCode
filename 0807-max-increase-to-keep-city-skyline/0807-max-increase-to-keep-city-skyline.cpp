class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
     
        int n = grid.size();
        int i,j;
        vector<int>row(n,0);
        vector<int>col(n,0);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                row[i] = max(grid[i][j],row[i]);
                col[j] = max(grid[i][j],col[j]);
            //    cout << row[i] << " " << col[j] << endl;
            }
        }
        int ans = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                int mini = min(row[i],col[j]);
                ans += mini - grid[i][j];
            }
        }
        return ans;
    }
};