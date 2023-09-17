class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
       int n = nums.size();
       int slow = 0;
        int fast = 0;
        
        while(true)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(fast == slow)
            {
                break;
            }
        }
        fast = 0;
        while(true)
        {
            slow = nums[slow];
            fast = nums[fast];
            if(slow == fast)
            {
                return slow;
            }
        }

        
    }
};