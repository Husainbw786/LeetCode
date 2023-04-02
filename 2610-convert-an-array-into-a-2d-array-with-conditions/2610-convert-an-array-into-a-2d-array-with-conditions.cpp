class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int n = nums.size();
        int i;
        vector<vector<int>>ans;
        int count = 1;
        while(true)
        {
            vector<int>temp;
            unordered_map<int,int>mp;
            for(i=0;i<n;i++)
            {
                mp[nums[i]]++;
                if(mp[nums[i]] == count)
                {
                    temp.push_back(nums[i]);
                }
            }
            count++;
            if(temp.size() == 0)
            {
                break;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};