class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int n = nums.size();
        unordered_set<int>st;
        int maxi = 0;
        int i = 0;
        int j = 0;
        int curr_sum = 0;
        
        while(j < n)
        {
            curr_sum += nums[j];
            while(st.find(nums[j]) != st.end())
            {
                curr_sum -= nums[i];
                st.erase(nums[i]);
                i++;
            }
            
            st.insert(nums[j]);
            maxi = max(maxi,curr_sum);
            j++;
            
        }
        return maxi;
    }
};