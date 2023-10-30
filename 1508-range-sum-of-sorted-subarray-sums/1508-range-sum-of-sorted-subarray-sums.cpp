class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        
       // long long int mod = 10e9 + 7;
        int i,j;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            int sum = 0;
            for(j=i;j<n;j++)
            {
                sum += nums[j];
                v.push_back(sum);
            }
        }
        int ans = 0;
        sort(v.begin(),v.end());
        for(i=left-1;i<right;i++)
        {
            ans = (ans + v[i]) % 1000000007;
        }
        
        return ans;
    }
};