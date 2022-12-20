class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
     
        int n = nums.size();
        vector<int>ans;
        int i;
        for(i=0;i<n;i++)
        {
            int idx = index[i];
            ans.insert(ans.begin()+idx,nums[i]);
        }
        return ans;
    }
};