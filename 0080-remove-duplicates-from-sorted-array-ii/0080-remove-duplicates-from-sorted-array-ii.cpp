class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        int j = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(j == 0 || j == 1 || nums[j-2] != nums[i])
            {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};