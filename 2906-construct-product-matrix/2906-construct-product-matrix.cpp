class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        long long int mul = 1; 
        vector<vector<int>>left(n,vector<int>(m)); 
        vector<vector<int>>right(n,vector<int>(m));  
        vector<vector<int>>ans(n,vector<int>(m));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                left[i][j] = mul;
                mul = (mul * grid[i][j]) % 12345;
                mul %= 12345;
            }
        }
        mul = 1;
        for(i=n-1;i>=0;i--)
        {
            for(j=m-1;j>=0;j--)
            {
                right[i][j] = mul;
                mul = (mul * grid[i][j]) % 12345;
                mul %= 12345;
            }
        }
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                ans[i][j] = (left[i][j] * right[i][j]) %  12345;
                ans[i][j] %= 12345;
            }
        }
        return ans;
    }
};