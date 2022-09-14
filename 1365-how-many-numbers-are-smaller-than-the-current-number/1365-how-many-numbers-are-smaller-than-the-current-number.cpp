class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int i;
        int j;
        int count = 0;
        vector<int>v;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(nums[i] > nums[j] && i != j)
                {
                    count++;
                }
            }
            v.push_back(count);
            count = 0;
        }
        return v;
    }
};