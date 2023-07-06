class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        int i=0;
        int j = 0;
        int sum = 0;
        int mini = INT_MAX;
        while(j < n)
        {
            sum += nums[j];
            if(sum >= target)
            {
                mini = min(mini,j-i+1);
            }
            else if(sum < target)
            {
                j++;
                continue;
            }
            if(sum > target)
            {
                while(sum > target)
                {
                    sum = sum - nums[i];
                    i++;
                    if(sum >= target)
                    {
                       mini = min(mini,j-i+1); 
                    }
                    
                }
               // cout << sum << " ";
                
            }
            j++;
        }
        if(mini == INT_MAX)
        {
            mini = 0;
        }
        return mini;
    }
};