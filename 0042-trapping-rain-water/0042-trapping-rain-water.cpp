class Solution {
public:
    int trap(vector<int>& heights) {
        
        int n = heights.size();
        int i;
        vector<int>pre,suf;
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            maxi = max(maxi,heights[i]);
            pre.push_back(maxi);
        }
        maxi = 0;
        for(i=n-1;i>=0;i--)
        {
            maxi = max(maxi,heights[i]);
            suf.push_back(maxi);
        }
        reverse(suf.begin(),suf.end());
        int ans = 0;
        for(i=0;i<n;i++)
        {
            ans += min(pre[i],suf[i]) - heights[i];
        }
        return ans;
        
    }
};