class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
      
        vector<int>ans(2,0);
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int pair = 0;
        int single = 0;
        for(auto x : mp)
        {
                pair += x.second/2;
                single += x.second % 2;
        }
        
        ans[0] = pair;
        ans[1] = single;
        return ans;
    }
};