class Solution {
public:
    int jump(vector<int>& nums)
    {
        
        int curr = 0;
        int maxi = 0;
        int jump = 0;
        int i;
        int n = nums.size();
        for(i=0;i<n-1;i++)
        {
            maxi = max(maxi,nums[i] + i);
            if(curr == i)
            {
                curr = maxi;
                jump++;
            }
        }
        return jump;
        
    }
};