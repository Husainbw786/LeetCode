class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
        sort(pairs.begin(),pairs.end());
        int n = pairs.size();
        int i;
        int ans = 1;
        int maxi = pairs[n-1][0];
       
        
        for(i=n-2;i>=0;i--)
        {
            if(pairs[i][1] < maxi)
            {
                maxi = pairs[i][0];
                ans++;
            }
        }
        return ans;
    }
};