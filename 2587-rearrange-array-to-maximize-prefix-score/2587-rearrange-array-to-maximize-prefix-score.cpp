class Solution {
public:
    int maxScore(vector<int>& nums) {
     
        sort(nums.begin(),nums.end(), greater<int>());
        int i;
        int n = nums.size();
        vector<long int>ans;
        long long int sum = 0;
        for(i=0;i<n;i++)
        {
            sum += nums[i];
            ans.push_back(sum);
        }
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(ans[i] > 0)
            {
                count++;
            }
        }
        return count;
    }
};