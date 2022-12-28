class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        
        int n = nums.size();
        int i;
       
        while(n != 1)
        {
            
            vector<int>v;
            int count = 0;
            for(i=0;i<n-1;i++)
            {
                int mini = INT_MAX;
                int maxi = INT_MIN;
                if(count % 2 == 0)
                {
                    mini = min(nums[i],nums[i+1]);
                    v.push_back(mini);
                    i++;
                }
                else
                {
                    maxi = max(nums[i],nums[i+1]);
                    v.push_back(maxi);
                    i++;
                }
                count++;
            }
            
            n = n/2;
            nums = v;
        }
        return nums[0];
    }
};