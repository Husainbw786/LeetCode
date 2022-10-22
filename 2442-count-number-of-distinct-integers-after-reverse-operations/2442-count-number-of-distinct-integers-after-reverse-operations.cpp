class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            int n = nums[i];
            int reverse = 0,remainder;
            while( n != 0)
            {
                 remainder = n % 10;
                 reverse = reverse * 10 + remainder;
                 n = n/10;
            }
            nums.push_back(reverse);
        }
        unordered_set<int>st;
        n = nums.size();
        for(i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }
        return st.size();
    }
};