class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
     
        int n = nums.size();
        int i;
        int sum = 0;
        int digit = 0;
        for(i=0;i<n;i++)
        {
            sum += nums[i];
            int temp = nums[i];
            while(temp > 0)
            {
                int dig = temp % 10;
                digit += dig;
                temp = temp / 10;
            }
        }
       int ans = abs(sum - digit);
        return ans;
    }
};