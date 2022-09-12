class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int maxi = INT_MIN;
        int i,j;
        int n = accounts.size();
        int m = accounts[0].size();
        for(i=0;i<n;i++)
        {
            int sum = 0;
            for(j=0;j<m;j++)
            {
                sum += accounts[i][j];
            }
            maxi = max(sum,maxi);
        }
        return maxi;
    }
};