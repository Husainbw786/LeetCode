class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        int n = matrix.size();
        int m = matrix[0].size();
        int i,j;
        for(i=0;i<n-1;i++)
        {
            if(matrix[i][0] <= target && matrix[i+1][0] > target)
            {
                for(j=0;j<m;j++)
                {
                    if(matrix[i][j] == target)
        
                    {
                        return true;
                    }
                }
            }
            
        }
        for(i=n-1;i<=n-1;i++)
        {
            for(j=0;j<m;j++)
            {
                if(matrix[i][j] == target)
                {
                    return true;
                }
            }
        }
        
        return false;
    }
};