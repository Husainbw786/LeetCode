class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        int i;
        for(i=0;i < nums.size();i++)
        {
            if(nums[i] == 0)
            {
                count0++;
            }
            if(nums[i] == 1)
            {
                count1++;
            }
            if(nums[i] == 2)
            {
                count2++;
            }
        }
        nums.clear();
        
        for(i=0;i<count0;i++)
        {
            nums.push_back(0);
        }
        for(i=0;i<count1;i++)
        {
            nums.push_back(1);
        }
        for(i=0;i<count2;i++)
        {
            nums.push_back(2);
        }
    }
};