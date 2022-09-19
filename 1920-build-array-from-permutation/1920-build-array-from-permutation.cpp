class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int i;
        int n = nums.size();
        vector<int>v;
       
        for(i=0;i<n;i++)
        {
            v.push_back(nums[nums[i]]);
            
        }
        return v;
        
    }
};