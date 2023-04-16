class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        
        int n = nums.size();
        sort(divisors.begin(),divisors.end());
        int m = divisors.size();
        int i,j;
        int maxi = 0;
        int ans = 0;
        for(i=0;i<m;i++)
        {
            int x = divisors[i];
            int count = 0;
            for(int j=0;j<n;j++)
            {
                if(nums[j] % x == 0)
                {
                    count++;
                }
                
            }
            if(count > maxi)
            {
                maxi = count;
                ans = x;
            }
        }
        if(maxi == 0)
        {
            return divisors[0];
        }
        return ans;
    }
};