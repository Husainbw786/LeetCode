class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int n = nums.size();
        int i,j;
        int maxi = 1;
        int check = 0;
        int count = 1;
        for(i=0;i<n-1;i++)
        {
            if(nums[i] < nums[i+1])
            {
                count++;
                maxi = max(maxi,count);
            }
            else
            {
                count = 1;
            }
        }
        return maxi;
    }
};