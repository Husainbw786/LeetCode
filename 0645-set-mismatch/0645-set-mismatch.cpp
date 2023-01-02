class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        vector<int>ans(2,0);
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto x : mp)
        {
            if(x.second == 2)
            {
                ans[0] = x.first;
                break;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(mp.find(i) == mp.end())
            {
                ans[1] = i;
                break;
            }
        }
        return ans;
    }
};