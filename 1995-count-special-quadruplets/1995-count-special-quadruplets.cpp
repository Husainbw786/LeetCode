class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        
        int n = nums.size();
        int i,j,k,l;
        int count = 0;
        for(i=0;i<n-3;i++)
        {
            for(j=i+1;j<n-2;j++)
            {
                for(k=j+1;k<n-1;k++)
                {
                    l = k+1;
                    while(l < n)
                    {
                       if(nums[i] + nums[j] + nums[k] == nums[l])
                        {
                            count++;
                        }
                        l++;
                    }
                    
                }
            }
        }
        return count;
    }
};