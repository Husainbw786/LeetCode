class Solution {
public:
    bool checkPowersOfThree(int n) {
        
       int i;
        for(i=14;i>=0;i--)
        {
            int x = pow(3,i);
            if(n - x >= 0)
            {
                n = n-x;
            }
            if(n == 0)
            {
                return true;
            }
        }
        return false;
       
    }
};