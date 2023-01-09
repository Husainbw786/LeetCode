class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        int i;
        int product = 1;
        for(i=0;i<n;i++)
        {
            product *= nums[i];
            left[i] = product;
        }
        product = 1;
        int j = 0;
        for(i=n-1;i>=0;i--)
        {
            product *= nums[i];
            right[j] = product;
            j++;
        }
        reverse(right.begin(),right.end());
        vector<int>ans(n,0);
        ans[0] = right[1];
        for(i=1;i<n-1;i++)
        {
            ans[i] = left[i-1] * right[i+1];
        }
        ans[n-1] = left[n-2];
        return ans;
    }
};