# Recursion
class Solution {
public:
int solve(int idx, int buy, int cap, vector<int>&prices)
{
if(idx == prices.size() || cap == 0)
{
return 0;
}
if(buy)
{
return max(-prices[idx] + solve(idx+1,0,cap,prices),solve(idx+1,1,cap,prices));
}
else
{
return max(prices[idx] + solve(idx+1,1,cap-1,prices),solve(idx+1,0,cap,prices));
}
}
int maxProfit(vector<int>& prices) {
int n = prices.size();
return solve(0,1,2,prices);
}
};
​
# Memoisation
​