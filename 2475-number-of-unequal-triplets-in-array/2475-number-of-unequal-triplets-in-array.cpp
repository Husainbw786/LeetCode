class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        
        int n = nums.size();
        int i,j,k;
        int count = 0;
        for(i=0;i<n-2;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    if(nums[i] != nums[j] && nums[j] != nums[k] && nums[k] != nums[i])
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};