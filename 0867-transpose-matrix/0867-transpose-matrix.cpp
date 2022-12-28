class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>ans;
        int j = 0;
        vector<int>temp;
        while(j < m)
        {
           for(int i=0;i<n;i++)
           {
               temp.push_back(matrix[i][j]);  
           }
           ans.push_back(temp);
            temp.clear();
            j++;
        }
        return ans;
    }
};