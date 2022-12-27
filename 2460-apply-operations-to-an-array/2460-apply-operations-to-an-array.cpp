class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        for(i=0;i<n-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                nums[i] = nums[i]*2;
                nums[i+1] = 0;
                i++;
            }
        }
        vector<int>ans;
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                count++;
                continue;
            }
            else
            {
                ans.push_back(nums[i]);
            }
        }
        while(count--)
        {
            ans.push_back(0);
        }
        return ans;
    }
};