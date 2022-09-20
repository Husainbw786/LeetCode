class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        set<int>st;
        int i;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int pro1 = nums[0] * nums[1];
        int pro2 = nums[n-1] * nums[n-2];
        return pro2 - pro1;
    }
};