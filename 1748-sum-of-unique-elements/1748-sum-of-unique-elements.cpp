class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        int i;
        int n = nums.size();
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int sum = 0;
        for(auto x : mp)
        {
            if(x.second == 1)
            {
                sum += x.first;
            }
        }
        return sum;
    }
};