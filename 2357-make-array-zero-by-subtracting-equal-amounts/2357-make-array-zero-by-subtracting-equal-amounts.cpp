class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        unordered_set<int>st;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i] > 0)
            {
                st.insert(nums[i]);
            }
        }
        return st.size();
    }
};