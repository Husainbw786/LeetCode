class Solution {
public:
    int numberOfCuts(int n) {
     
        if( n == 1 || n == 0)
        {
            return 0;
        }
        if(n % 2 == 0)
        {
            return n/2;
        }
        return n;
    }
};