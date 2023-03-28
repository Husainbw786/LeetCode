class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     
        int i = 0;
        int j = 1;
        int n = nums.size();
        while(j < n)
        {
            if(nums[i] == 0 && nums[j] != 0)
            {
                swap(nums[i],nums[j]);
                i++;
                j++;
                continue;
            }
            if(nums[i] != 0)
            {
                i++;
            }
            j++;
        }
    }
};