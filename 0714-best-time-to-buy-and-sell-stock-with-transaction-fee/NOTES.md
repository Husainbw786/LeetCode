**Recursion**
class Solution {
public:
int solve(int idx,int buy, vector<int>prices, int fee)
{
if(idx == prices.size())
{
return 0;
}
if(buy == 1)
{
return max(-prices[idx] + solve(idx+1,0,prices,fee) , solve(idx+1,1,prices,fee));
}
else
{
return max(prices[idx] + solve(idx+1,1,prices,fee) - fee , solve(idx+1,0,prices,fee));
}
}
int maxProfit(vector<int>& prices, int fee) {
int n = prices.size();
return solve(0,1,prices,fee);
}
};