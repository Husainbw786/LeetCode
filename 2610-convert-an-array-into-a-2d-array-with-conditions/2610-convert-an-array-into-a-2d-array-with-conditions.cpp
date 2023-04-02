class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int n = nums.size();
        int i;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<vector<int>>ans;
        int count = n;
        while(count--)
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

            if(temp.size() == 0)
            {
                break;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};