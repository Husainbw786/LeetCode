class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>pascal_tri;
        
        int i,j;
        for(i=0;i<numRows;i++)
        {
            vector<int>temp(i+1,0);
            for(j=0;j<=i;j++)
            {
                if(j == 0 || j == i)
                {
                    temp[j] = 1;
                    continue;
                }
                temp[j] = pascal_tri[i-1][j-1] + pascal_tri[i-1][j];
            }
            pascal_tri.push_back(temp);
        }
        return pascal_tri;
        
    }
};