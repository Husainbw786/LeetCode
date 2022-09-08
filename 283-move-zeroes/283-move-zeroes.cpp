class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     
        int len = nums.size() - 1;
        int j = 0;
        
        int i;
        for(i=0;i<=len;i++)
        {
            if(nums[i] != 0)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        for(i=j;i<=len;i++)
        {
            nums[i] = 0;
        }
    }
};