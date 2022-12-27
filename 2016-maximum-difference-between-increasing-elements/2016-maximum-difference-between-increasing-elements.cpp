class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        int maxi = INT_MIN;
        bool flag = false;
        for(i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
               if(nums[i] < nums[j])
                {
                    flag = true;
                    int diff = nums[j] - nums[i];
                    maxi = max(maxi,diff);
                } 
            }   
        }
        if(!flag)
        {
            return -1;
        }
        return maxi;
    }
};