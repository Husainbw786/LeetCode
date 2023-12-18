class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        int n = nums.size();
        unordered_map<int,int>mp;
        
        int i = 0;
        int j = 0;
        int maxi = 0;
        
        while(j < n)
        {
            mp[nums[j]]++;
            if(mp[nums[j]] > k)
            {
                while(mp[nums[j]] > k)
                {
                    mp[nums[i]]--;
                    i++;
                }
                maxi = max(j-i+1,maxi);
            }
            maxi = max(j-i+1,maxi);
            j++;
        }
        
        return maxi;
    }
};