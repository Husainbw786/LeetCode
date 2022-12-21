class Solution {
public:
    
    int findmax(vector<vector<int>>&grid,int x,int y)
    {
        int maxi = 0;
        for(int i=x;i<x+3;i++)
        {
            for(int j=y;j<y+3;j++)
            {
                maxi = max(maxi,grid[i][j]);
            }
        }
        return maxi;
    }
    
    
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
     vector<vector<int>>ans;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>v(n-2,vector<int>(n-2));
        int i,j,k;
        for(i=0;i<n-2;i++)
        {
            vector<int>temp;
            for(j=0;j<n-2;j++)
            {
                v[i][j] = findmax(grid,i,j);
            }
        }
        return v;
    }
};