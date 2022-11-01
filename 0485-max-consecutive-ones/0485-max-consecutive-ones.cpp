class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
         int n = nums.size();
        if(n == 1 && nums[0] == 1)
        {
            return 1;
        }
        else if(n == 1 && nums[0] == 0)
        {
            return 0;
        }
        if(n==2)
        {
            if(nums[0] == 0 && nums[1] == 1)
            {
                return 1;
            }
        }
        int maxi = 0;
        int i;
        bool flag = false; 
        
        for(i=0;i<n-1;i++)
        {
            int count = 0;
            if(nums[i] == 1)
            {
                flag = true;
            }
            while(i < n-1 && nums[i] == 1 && nums[i] == nums[i+1])
            {
                count++;
                i++;
            }
            maxi = max(count + 1,maxi);
            
        }
        if(!flag)
        {
            return 0;
        }
        return maxi ;
    }
};