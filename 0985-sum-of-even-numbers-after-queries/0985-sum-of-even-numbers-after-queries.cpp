class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        int n = queries.size();
        int i;
        vector<int>v;
        int sum = 0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i] % 2 == 0)
            {
                sum += nums[i];
            }
        }
        for(i=0;i<n;i++)
        {
            int idx = queries[i][1];
            int val = queries[i][0];
            if(nums[idx] % 2 == 0)
            {
                sum -= nums[idx];
            }
            nums[idx] += val;
            if(nums[idx] % 2 == 0)
            {
                sum += nums[idx];
            }
          v.push_back(sum);
        }
        return v;
    }
};