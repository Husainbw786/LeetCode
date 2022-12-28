class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        unordered_set<int>st;
        for(i=1;i<n;i++)
        {
            int sum1 = nums[i] + nums[i-1];
            if(st.find(sum1) != st.end())
            {
                return true;
            }
            st.insert(sum1);
        }
        return false;
    }
};