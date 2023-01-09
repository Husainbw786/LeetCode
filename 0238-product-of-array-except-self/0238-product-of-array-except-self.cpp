class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>ans(n,0);
        int i;
        int product = 1;
        for(i=0;i<n;i++)
        {
            product *= nums[i];
            ans[i] = product;
        }
        product = 1;
        for(i=n-1;i>0;i--)
        {
            ans[i] = ans[i-1]*product;
            product *= nums[i];
        }
        ans[0] = product;
        return ans;
    }
};