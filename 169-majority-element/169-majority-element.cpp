class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int appear = n/2;
        for(auto x : mp)
        {
            if(x.second > appear)
            {
                return x.first;
            }
        }
        return 0;
    }
};