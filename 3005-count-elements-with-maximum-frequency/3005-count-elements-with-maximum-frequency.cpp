class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
     
        
        int n = nums.size();
        int i;
        unordered_map<int,int>mp;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int ans = 0;
        int maxi = 0;
        for(auto x : mp)
        {
            if(x.second > maxi)
            {
                maxi = x.second;
            }
        }
        for(auto x : mp)
        {
            if(x.second == maxi)
            {
                ans += x.second;
            }
        }
        return ans;
        
    }
};