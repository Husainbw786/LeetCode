class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
       
        
        int n = nums.size();
        int i,j;
        vector<int>v(n,1);
        
        int ans = 1;
        for(i=1;i<n;i++)
        {
           for(j=0;j<i;j++)
           {
               if(nums[j] < nums[i])
               {
                   v[i] = max(v[i],1 + v[j]);
               }
           }
           ans = max(v[i],ans); 
        
        }
        return ans;
    }
};