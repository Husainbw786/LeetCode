class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        
        int maxi = 0;
        int n = nums.size();
        int i;
        vector<long long>v;
        long long int sum = 0;
        
        for(i=0;i<n;i++)
        {
            maxi = max(nums[i],maxi);
            v.push_back(nums[i] + maxi + sum);
            sum += nums[i] + maxi;
            
        }
        return v;
    }
};