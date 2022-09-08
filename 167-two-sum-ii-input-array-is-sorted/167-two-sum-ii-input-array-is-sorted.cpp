class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     
        int low = 0;
        int high = nums.size()-1;
        vector<int>ans(2,0);
        while(low < high)
        {
            int sum = nums[low] + nums[high];
            if(sum == target)
            {
                ans[0] = low + 1;
                ans[1] = high + 1;
                break;
            }
            else if(sum > target)
            {
                high--;
            }
            else
            {
                low++;
            }
        }
        return ans;
    }
};