class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        
        int x = 100;
        int a = purchaseAmount;
        int b = purchaseAmount;
        
        int counta = 0;
        int countb = 0;
        while(a % 10 != 0)
        {
            a++;
            counta++;
        }
        while(b % 10 != 0)
        {
            b--;
            countb++;
        }
        
        if(counta > countb)
        {
            return x - b;
        }
        return x - a;
        
    }
};