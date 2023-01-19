class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        int sum = 0;
        int ans = 0;
        mp[sum]++;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            sum += nums[i];
            int remainder = sum % k;
            if(remainder < 0)
            {
                remainder += k;
            }
            if(mp.find(remainder) != mp.end())
            {
                ans += mp[remainder];
            }
            mp[remainder]++;
        }
        return ans;
    }
};