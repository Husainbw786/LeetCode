class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int n = nums.size();
        int i;
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
            maxi = max(mp[nums[i]],maxi);
        }
        vector<vector<int>>ans;
        int count = n;
        while(maxi--)
        {
            vector<int>temp;
            for(auto x : mp)
            {
                if(x.second > 0)
                {
                    temp.push_back(x.first);
                    mp[x.first]--;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};