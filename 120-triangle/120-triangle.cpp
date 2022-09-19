class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int len = triangle.size()-1;
        int i,j;
        for(i=len-1;i>=0;i--)
        {
            for(j=0;j<triangle[i].size();j++)
            {
    triangle[len][j] = min(triangle[len][j] +triangle[i][j] ,triangle[len][j+1] + triangle[i][j]);
            }
        }
         return triangle[len][0];
    }
};