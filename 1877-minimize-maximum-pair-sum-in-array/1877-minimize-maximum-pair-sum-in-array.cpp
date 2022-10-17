class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>v;
        int i;
        int j = n-1;
        for(i=0;i<n/2;i++)
        {
            int sum = nums[i] + nums[j];
            v.push_back(sum);
            j--;
        }
        n = v.size();
        int maxi = INT_MIN;
        for(i=0;i<n;i++)
        {
            maxi = max(maxi,v[i]);
        }
        return maxi;
    }
};