class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
     
        int count = 0;
        int i,j;
        int n = grid.size();
        int maxi = 0;
        int ans = 0;
        for(i=0;i<n;i++)
        {
            int count = 0;
            for(j=0;j<n;j++)
            {
                if(grid[i][j] == 1)
                {
                    count++;
                }
            }
            if(count > maxi)
            {
                maxi = count;
                ans = i;
            }
        }
        return ans;
    }
};