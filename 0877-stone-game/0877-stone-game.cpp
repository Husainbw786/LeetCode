class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        
        int a = 0;
        int b = 0;
        int i = 0;
        int j = 0;
        int count = 0;
        
        while(i <= j)
        {
            if(count % 2 == 0)
            {
                int maxi = max(piles[i],piles[j]);
                a += maxi;
                if(piles[i] > piles[j])
                {
                    i++;
                }
                else
                {
                    j--;
                }
                count++;
            }
            else
            {
                int maxi = max(piles[i],piles[j]);
                b += maxi;
                if(piles[i] > piles[j])
                {
                    i++;
                }
                else
                {
                    j--;
                }
                count++;
            }
        }
        if(a > b)
        {
            return true;
        }
        return false;
        
    }
};