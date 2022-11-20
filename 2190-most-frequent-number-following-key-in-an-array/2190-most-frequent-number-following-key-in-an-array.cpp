class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        
        unordered_map<int,int>mp;
        int i;
        int n = nums.size();
        for(i=0;i<n-1;i++)
        {
            if(nums[i] == key)
            {
                mp[nums[i+1]]++;
            }
        }
        int ans;
        int max = 0;
        for(auto x : mp)
        {
            if(x.second > max)
            {
                max = x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};