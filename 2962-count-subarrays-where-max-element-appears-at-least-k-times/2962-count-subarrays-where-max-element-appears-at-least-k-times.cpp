class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        int n = nums.size();
        int i;
        long long int ans = 0;
        int maxi = 0;
        long long int count = 0;
        for(i=0;i<n;i++)
        {
            maxi = max(maxi,nums[i]);
        }
        i = 0;
        int j =0;
        while(j < n)
        {
            if(nums[j] == maxi)
            {
                count++;
            }
            if(count >= k)
            {
                ans += n-j;
                while(count >=  k)
                {
                    if(nums[i] == maxi)
                    {
                        count--;
                    }
                    if(count >= k)
                    {
                        ans += n-j;
                    }
                    i++;
                }
            }
            j++;
        }
        
        return ans;
        
    }
};
