class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int sum = 0;
        int n = mat.size();
        int m = mat[0].size();
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i == j  || i+j == n-1)
                {
                    sum += mat[i][j];
                }
               
            }
        }
        return sum;
    }
};