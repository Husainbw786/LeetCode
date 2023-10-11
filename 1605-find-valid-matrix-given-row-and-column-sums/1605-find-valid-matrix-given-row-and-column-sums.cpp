class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        
        int n = rowSum.size();
        int m = colSum.size();
        vector<vector<int>>v(n,vector<int>(m,0));
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                int mini = min(rowSum[i],colSum[j]);
                rowSum[i] -= mini;
                colSum[j] -= mini;
                v[i][j] = mini;
            }
        }
        return v;
    }
};