class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        set<int>st;
        int i;
        int n = nums.size();
        vector<int>v;
        for(i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        for(auto x : st)
        {
            v.push_back(x);
        }
        n = v.size();
        if(v.size() < 3)
        {
            return v[n-1];
        }
        return v[n-3];
    }
};