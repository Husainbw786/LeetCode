class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>ans(2,-1);
        bool flag = false;
        int n = nums.size();
        int count = 0;
       
        for(int i=0;i<n;i++)
        {
            if(nums[i] == target && !flag)
            {
                ans[0] = i;
                flag = true;
            }
            if(i == n-1 && nums[i] == target)
            {
                ans[1] = i; 
                return ans;
            }
            else if(nums[i] == target && nums[i+1] != target)
            {
                ans[1] = i;
            }
            if(nums[i] == target)
            {
                count++;
            }
            
        }
        if(count == 1)
        {
            ans[1] = ans[0];
        }
        return ans;
        
    }
};