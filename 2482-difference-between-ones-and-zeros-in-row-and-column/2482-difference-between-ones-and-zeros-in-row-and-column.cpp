class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        unordered_map<int,int>mp1,mp2;
        vector<vector<int>>v(n, vector<int>(m, 0));
        int i,j;
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               if(grid[i][j] == 1)
               {
                   mp1[i]++;
                   mp2[j]++;
               }
           }
       }
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
            v[i][j] = mp1[i] + mp2[j] - (n - mp1[i] + m - mp2[j]); 
           }
       }
        return v;
    }
};