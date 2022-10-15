class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int>st;
        int count = 0;
        for(auto x : nums)
        {
            int val = x - diff;
            if(st.find(val) != st.end() && st.find(val - diff) != st.end())
            {
                count++;
            }
            st.insert(x);
        }
        return count;
    }
};