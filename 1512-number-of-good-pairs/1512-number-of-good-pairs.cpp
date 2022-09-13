class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int i;
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            if(nums[i] == nums[j])
            {
                count++;
            }
        }
        return count;
    }
};