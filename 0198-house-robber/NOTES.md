return 0;
}
if(dp[idx] != -1)
{
return dp[idx];
}
int pick = nums[idx] + solve(idx - 2,nums,dp);
int not_pick = 0 + solve(idx-1,nums,dp);
return dp[idx] = max(not_pick,pick);
}
int rob(vector<int>& nums) {
int n = nums.size();
vector<int>dp(n,-1);
return solve(n-1,nums,dp);
}
};
​
********************** ********************* *********************
Buttom's up approach / Tabulation Approach.
​
class Solution {
public:
int rob(vector<int>& nums) {
int n = nums.size();
vector<int>dp(n);
int i;
dp[0] = nums[0];
for(i=1;i<n;i++)
{
int take = nums[i];
if(i > 1)
{
take += dp[i-2];
}
int not_take = 0 + dp[i-1];
dp[i] = max(take,not_take);
}
return dp[n-1];
}
};
​
​
​
​