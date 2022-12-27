class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        int mini = 1;
        
        while(true)
        {
            int sum = mini;
            bool flag = false;
            for(i=0;i<n;i++)
            {
                sum += nums[i];
                if(sum < 1)
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
            {
                mini++;
            }
            else
            {
                break;
            }
        }
        return mini;
    }
};