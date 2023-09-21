class Solution {
public:
    int countWays(vector<int>& nums) {
     
            
      //  0 0 2 3 4
            
        int n = nums.size();
        int i;
        sort(nums.begin(),nums.end());
        int total = 0;
        if(nums[n-1] < n)
        {
            total++;
        }
        if(nums[0] > 0)
        {
            total++;
        }
        for(i=0;i<n-1;i++)
        {
            int selected = i+1;
            bool flag = false;
            if(selected >= nums[i+1])
            {
                flag = true;
            }
            if(selected <= nums[i])
            {
                flag = true;
            }
            if(!flag)
            {
                total++;
            }
        }
        
        return total;
            
    }
};