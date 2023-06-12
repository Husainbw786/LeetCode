class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int pre = 1;
        int suf = 1;
        int i;
        int maxi = INT_MIN;
        for(i=0;i<n;i++)
        {
            pre = pre * nums[i];
            suf = suf * nums[n-i-1];
            maxi = max(maxi,pre);
            maxi = max(maxi,suf);
            if(pre == 0)
            {
                pre = 1;
            }
            if(suf == 0)
            {
                suf = 1;
            }
        }
        return maxi;
    }
};