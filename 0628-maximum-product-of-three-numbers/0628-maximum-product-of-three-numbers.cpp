class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i;
        long long pro1 = 1;
        long long pro2 = 1;
        int last = nums[n-1];
        int sec_last = nums[n-2];
        int third_last = nums[n-3];
        pro1 = nums[n-1] * nums[n-2] * nums[n-3];
        int first = nums[0];
        int second = nums[1];
        bool flag = false;
        if(first < 0 && second < 0)
        {
            flag = true;
            pro2 = first * second * last;
        }
        if(flag)
        {
           return max(pro1,pro2); 
        }
        return pro1;
    }
};