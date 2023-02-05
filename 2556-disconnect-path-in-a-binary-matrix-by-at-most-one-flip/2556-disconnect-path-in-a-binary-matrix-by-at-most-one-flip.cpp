class Solution {
public:
    
    bool solve(int i,int j,vector<vector<int>>&grid)
    {
        if(i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0)
        {
            return false;
        }
        if(i == grid.size()-1 && j == grid[0].size()-1)
        {
            return true;
        }
        grid[i][j] = 0;
        return solve(i+1,j,grid) || solve(i,j+1,grid);
        
        
    }
    
    bool isPossibleToCutPath(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        int count = 0;
        int ans = solve(0,0,grid);
        grid[0][0] = 1;
        ans += solve(0,0,grid);
        if(ans <= 1)
        {
            return true;
        }
        return false;
        
    }
};