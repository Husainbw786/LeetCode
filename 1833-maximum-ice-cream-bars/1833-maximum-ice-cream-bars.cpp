class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
       sort(costs.begin(),costs.end());
        int n = costs.size();
        int i;
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(coins >= costs[i])
            {
               coins = coins - costs[i];
               count++; 
            }
            else
            {
                break;
            }
        }
       return count;
    }
};