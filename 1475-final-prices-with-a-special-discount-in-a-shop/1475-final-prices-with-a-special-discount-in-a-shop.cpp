class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        int n = prices.size();
        int i;
        vector<int>v(n,0);
        for(i=0;i<n-1;i++)
        {
            int x = prices[i];
            for(int j=i+1;j<n;j++)
            {
                if(prices[j] <= x)
                {
                    x = x - prices[j];
                    break;
                }
            }
            v[i] = x;
        }
        v[n-1] = prices[n-1];
        return v;
    }
};