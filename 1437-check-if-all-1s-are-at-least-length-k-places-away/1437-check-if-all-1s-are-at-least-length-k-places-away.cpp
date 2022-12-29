class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        
        int n = nums.size();
        int i;
        for(i=0;i<n;i++)
        {
            int count = 0;
            if(nums[i] == 1 && i == n-1)
            {
                break;
            }
            if(nums[i] == 1)
            {
                i++;
                while(i < n && nums[i] == 0)
                {
                    count++;
                    i++;
                }
                if(i-1 == n-1 && nums[i-1] == 0)
                {
                    break;
                }
                if(count < k)
                {
                    return false;
                }
                i--;
            }
        }
        return true;
    }
};