class Solution {
public:
    vector<int> getRow(int n) {
        
        
        int i,j;
        vector<vector<int>>v;
        for(i=0;i<n+1;i++)
        {
            vector<int>temp(i+1,0);
            for(j=0;j<=i;j++)
            {
                if(j == 0 || j == i)
                {
                    temp[j] = 1;
                    continue;
                }
                temp[j] = v[i-1][j-1] + v[i-1][j];
            }
            v.push_back(temp);
        }
        return v[n];
    }
};