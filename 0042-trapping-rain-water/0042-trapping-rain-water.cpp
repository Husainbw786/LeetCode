class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        vector<int>pre(n,0);
        vector<int>suf(n,0);
        int maxi = 0;
        int i;
        for(int i=0;i<n;i++)
        {
            maxi = max(height[i],maxi);
            pre[i] = maxi;
        }
        maxi = 0;
        for(i=n-1;i>=0;i--)
        {
            maxi = max(height[i],maxi);
            suf[i] = maxi;
        }
        int ans = 0;
      //  reverse(suf.begin(),suf.end());
        for(i=0;i<n;i++)
        {
            ans += min(suf[i],pre[i]) - height[i];
        }
        return ans;
        
    }
};
