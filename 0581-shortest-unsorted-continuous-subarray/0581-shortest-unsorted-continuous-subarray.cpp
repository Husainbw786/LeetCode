class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        int j;
        int start = -1;
        int end = -1;
        vector<int>temp;
        for(i=0;i<n;i++)
        {
            temp.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++)
        {
            if(temp[i] != nums[i])
            {
                start = i;
                break;
            }
        }
        for(i=n-1;i>=0;i--)
        {
            if(temp[i] != nums[i])
            {
                end = i;
                break;
            }
        }
           
        if(start == -1 || end == -1)
        {
            return 0;
        }
        return end - start + 1;
    }
};