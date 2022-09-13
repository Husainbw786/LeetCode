class Solution {
public:
    int singleNumber(vector<int>& nums) {
     
        sort(nums.begin(),nums.end());
        int i = 0;
        int j =1;
        int n = nums.size();
        while(j<n)
        {
            if(nums[i] == nums[j])
            {
                i += 2;
                j += 2;
            }
            else
            {
                return nums[i];
            }
        }
        return nums[n-1];
    }
};