class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int n = nums.size();
        int odd = 0;
        unordered_map<int,int>mp;
        int i;
        int ans = 0;
        for(i=0;i<n;i++)
        {
            if(nums[i] % 2 != 0)
            {
                odd++;
            }
            if(odd == k)
            {
                ans++;
            }
            if(mp.find(odd-k) != mp.end())
            {
                ans += mp[odd-k];
            }
            mp[odd]++;
        }
        return ans;
    }
};