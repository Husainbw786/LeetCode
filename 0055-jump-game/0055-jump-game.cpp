class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        int to_reach = n-1;
        for(i=n-2;i>=0;i--)
        {
             if(to_reach <= nums[i] + i)
             {
                to_reach = i;
             }
        }
        if(to_reach == 0)
        {
            return true;
        }
        return false;   
    }
};