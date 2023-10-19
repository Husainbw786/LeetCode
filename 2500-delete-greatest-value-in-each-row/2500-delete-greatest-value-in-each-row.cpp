class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        
        
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        int i,j;
        for(i=0;i<n;i++)
        {
           sort(grid[i].rbegin(),grid[i].rend());
        }
        
        for(i=0;i<m;i++)
        {
            int maxi = INT_MIN;
            for(j=0;j<n;j++)
            {
                maxi = max(grid[j][i],maxi);
            }
            ans += maxi;
        }
        return ans;
    }
};