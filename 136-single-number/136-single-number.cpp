class Solution {
public:
    int singleNumber(vector<int>& nums) {
     
        unordered_map<int,int>mp;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto x : mp)
        {
            if(x.second == 1)
            {
                return x.first;
            }
        }
        return 0;
    }
};