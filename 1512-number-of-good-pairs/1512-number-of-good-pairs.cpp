class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        long long  count = 0;
        for(auto x : nums)
        {
            count += mp[x]++;
           
        }
        return count;
    }
};