class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n = nums.size();
        double ans = 0;
        int i = 0;
        int  j = 0;
        double maxi = INT_MIN;
        while(j < n)
        {
            ans += nums[j];
            if(j-i+1 < k)
            {
                j++;
            }
            else if(j-i+1 == k)
            {
                maxi = max(maxi,ans);
                ans -= nums[i];
                i++;
                j++;
            }
        }
        return maxi / k; 
    }
};