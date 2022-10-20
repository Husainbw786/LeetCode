class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        int mini;
        int maxi;
        vector<int>minRows(n);
        vector<int>maxCol(m);
         for(int i=0;i<n;i++)
         {
             mini= INT_MAX;
            for(int j=0;j<m;j++)
            {
                mini= min(matrix[i][j],mini);
            }
            minRows[i] = mini;
        }
        
         for(int i=0;i<m;i++)
         {
               maxi= INT_MIN;
            for(int j=0;j<n;j++){
                maxi= max(matrix[j][i],maxi);
            }
            maxCol[i] = maxi;
         }
         vector<int> ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j] == minRows[i] && matrix[i][j]== maxCol[j])
                {
                  ans.push_back(matrix[i][j]);  
                }
            }
        }
        return ans;
    }
};