class Solution {
public:
    bool isGood(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>ans;
        int i;
        int maxi = INT_MIN;
        for(i=0;i<n;i++)
        {
            maxi = max(maxi,nums[i]);
        }
        for(i=1;i<=maxi;i++)
        {
            ans.push_back(i);
        }
        ans.push_back(maxi);
        
        if(n != ans.size())
        {
            return false;
        }
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++)
        {
            if(ans[i] != nums[i])
            {
                return false;
            }
        }
        return true;
    }
};