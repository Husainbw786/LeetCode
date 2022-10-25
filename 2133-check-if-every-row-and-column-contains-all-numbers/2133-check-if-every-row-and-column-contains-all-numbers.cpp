class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        unordered_set<int>st_row;
        unordered_set<int>st_col;
        int i,j;
        int sum = n*(n+1)/2;
        
        for(i=0;i<n;i++)
        {
            int row_sum = sum;
            int col_sum = sum;
            for(j=0;j<n;j++)
            {
                row_sum -= matrix[i][j];
                col_sum -= matrix[j][i];
                st_row.insert(matrix[i][j]);
                st_col.insert(matrix[j][i]);
            }
            
             if(row_sum != 0 || col_sum != 0 || st_row.size() != n || st_col.size() != n)
                {
                    return false;
                }
        }
       
        return true;
        
    }
};