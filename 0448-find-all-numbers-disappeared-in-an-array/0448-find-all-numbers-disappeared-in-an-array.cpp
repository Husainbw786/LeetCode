class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int size = nums.size();
        int i;
        unordered_set<int>st;
        for(i=0;i<size;i++)
        {
            st.insert(nums[i]);
        }
        vector<int>ans;
        for(i=1;i<=size;i++)
        {
            if(st.find(i) == st.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};