class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i;
        int StartCol = 0;
        int StartRow = 0;
        int EndRow = n-1;
        int EndCol = m-1;
        vector<int>rst;
        while(StartRow <= EndRow && StartCol <= EndCol)
        {
            i = StartCol;
            while(i <= EndCol && StartRow <= EndRow)
            {
                rst.push_back(matrix[StartRow][i]);
                i++;
            }
            StartRow++;
            
            i = StartRow;
            while(i <= EndRow && StartCol <= EndCol)
            {
                rst.push_back(matrix[i][EndCol]);
                i++;
            }
            EndCol--;
            i = EndCol;
            
            while(i >= StartCol && StartRow <= EndRow)
            {
                rst.push_back(matrix[EndRow][i]);
                i--;
            }
            EndRow--;
            i = EndRow;
            while(i >= StartRow && StartCol <= EndCol)
            {
                rst.push_back(matrix[i][StartCol]);
                i--;
            }
            StartCol++;
        }
        return rst;
    }
};