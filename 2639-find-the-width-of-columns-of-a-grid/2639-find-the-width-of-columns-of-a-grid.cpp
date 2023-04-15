class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        vector<int>v;
        for(j=0;j<m;j++)
        {
            int maxi = 0;
            for(i=0;i<n;i++)
            {
                string x = to_string(grid[i][j]);
                if(maxi < x.size())
                {
                    maxi = x.size();
                }
            }
            v.push_back(maxi);
        }
        return v;
        
    }
};