class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>v;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i] == target)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};