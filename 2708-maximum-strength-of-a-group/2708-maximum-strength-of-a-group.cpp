class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        long long pro = 1;
        int maxneg = INT_MIN;
        int n = nums.size();
        int negcount = 0;
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<n; i++)
        {
            if(nums[i] == 0)
            {
              continue;             
            }
            else if(nums[i] > 0)
            {
                pro *= nums[i];
            }
            else
            {
                pro *= nums[i];
                if(maxneg < nums[i])
                {
                    maxneg = nums[i];
                }
                negcount++;
            }
        }

        if(nums[n-1] == 0 && negcount < 2)
        {
            return 0;
        }
        if(nums[n-1] < 0 && negcount < 2)
        {
            return maxneg;
        }
        if(pro > 0)
        {
            return pro;
        }
        if(pro < 0)
        {
            return pro/maxneg;
        }
        
        return pro;
    }
};
