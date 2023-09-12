class Solution {
public:
    int jump(vector<int>& nums)
    {
        
        int n = nums.size();
        int jump = 0;
        int max_reach = 0;
        int curr = 0;
        
        for(int i=0;i<n-1;i++)
        {
           max_reach = max(max_reach,nums[i]+i);
           if(curr == i)
           {
               jump++;
               curr = max_reach;
           }
            
        }
        return jump;
        
    }
};