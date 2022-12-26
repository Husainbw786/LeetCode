class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        
        map<int,int>mp;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            vector<int>temp = nums[i];
            for(int j=0;j<temp.size();j++)
            {
                mp[temp[j]]++;
            }
        }
        vector<int>ans;
        for(auto x : mp)
        {
            if(x.second == n)
            {
               ans.push_back(x.first);        
            }
        }
        return ans;
    }
};