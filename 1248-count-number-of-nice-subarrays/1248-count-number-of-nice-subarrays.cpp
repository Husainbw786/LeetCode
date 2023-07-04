class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int n = nums.size();
        int i;
        unordered_map<int,int>mp;
        int count = 0;
        int ans = 0;
        for(i=0;i<n;i++)
        {
            if(nums[i] % 2 != 0)
            {
                count++;
            }
            if(count == k)
            {
                ans++;
            }
            if(mp.find(count - k) != mp.end())
            {
                ans += mp[count-k];
            }
            mp[count]++;
        }
        return ans;
    }
};