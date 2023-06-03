class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        
        int n  = nums.size();
        int i;
        int mod = 1000000000+7;
        unordered_map<int,int>mp;
        long long int count = 0;
        for(i=0;i<n;i++)
        {
            int x = nums[i];
            string temp = to_string(x);
            reverse(temp.begin(),temp.end());
            int rev = stoi(temp);
            long long int curr = x - rev;
            curr = curr % mod;
            count += mp[curr];
            mp[curr]++;
        }
        return count % mod;
    }
};