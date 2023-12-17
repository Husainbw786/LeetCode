class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int i,j;
        unordered_map<int,int>mp;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                mp[grid[i][j]]++;
            }
        }
        
        int x = n*n;
        int sum = x * (x+1)/2;
      
        for(auto z : mp)
        {
            if(z.second > 1)
            {
                x = z.first;
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(grid[i][j] != x)
                {
                    sum -= grid[i][j];
                }
                
            }
        }
        sum -= x;
        return {x,sum};
        
            
    }
};