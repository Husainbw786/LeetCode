class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        
        int maxi = 0;
        int n = nums.size();
        int i;
        int ans = 0;
        for(i=0;i<n;i++)
        {
            ans = ans | nums[i];
        }
        return ans;
    }
};