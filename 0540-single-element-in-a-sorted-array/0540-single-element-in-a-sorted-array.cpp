class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
      int n = nums.size();
      int ans = 0;
      int i;
        for(i=0;i<n;i++)
        {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};
 