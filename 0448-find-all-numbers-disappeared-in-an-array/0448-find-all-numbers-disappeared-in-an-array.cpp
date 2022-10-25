class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int size = nums.size();
        int i;
        unordered_map<int,int>mp;
        for(i=0;i<size;i++)
        {
            mp[nums[i]]++;
        }
        vector<int>ans;
        for(i=1;i<=size;i++)
        {
            if(mp.find(i) == mp.end())
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};