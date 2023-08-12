**Recursion**
class Solution {
public:
int solve(int idx, int buy, vector<int>prices)
{
if(idx >= prices.size())
{
return 0;
}
if(buy)
{
return max(-prices[idx] + solve(idx+1,0,prices),solve(idx+1,1,prices));
}
else
{
return max(prices[idx] + solve(idx+2,1,prices),solve(idx+1,0,prices));
}
}
int maxProfit(vector<int>& prices) {
int n = prices.size();
return solve(0,1,prices);
}
};
​
**Memoisation**
​
​