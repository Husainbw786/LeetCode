class Solution {
public:
    int numberOfMatches(int n) {
        
        int sum = 0;
        if(n == 1)
        {
            return 0;
        }
        while(n != 1)
        {
            if(n % 2 == 0)
            {
                n = n / 2;
                sum += n;
            }
            else
            {
                sum += n/2;
                n = (n / 2) + 1;
                
            }
        }
        return sum;
    }
};