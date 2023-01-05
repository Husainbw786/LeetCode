class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        int n = piles.size();
        int i = 0;
        int j = n-2;
        int k = n-1;
        int alice = 0;
        int me = 0;
        int bob = 0;
        sort(piles.begin(),piles.end());
        while(i < j)
        {
            me += piles[j];
            i++;
            j -= 2;
            k -= 2;
        }
        return me;
    }
};