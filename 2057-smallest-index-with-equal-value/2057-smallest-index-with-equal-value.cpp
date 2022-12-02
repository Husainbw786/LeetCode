class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int i;
        int n = nums.size();
        int ans = -1;
        for(i=0;i<n;i++)
        {
            if(i % 10 == nums[i])
            {
                ans = i ;
                break;
            }
        }
        return ans;
    }
};