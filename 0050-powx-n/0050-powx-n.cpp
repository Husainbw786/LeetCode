class Solution {
public:
    double myPow(double x, int n) {
        
        if( n == 0)
        {
            return 1;
        }
        double ans = 1.0;
        double y = 1;
        long long p = abs(n);
        
            while(p)
            {
               if(p % 2 != 0)
               {
                 ans = ans * x;
                 p = p - 1;  
               }
               else if( p % 2 == 0)
               {
                   x = x * x;
                   p = p /2;
               }
               
            } 
        if(n < 0)
        {
            return 1 / ans;
        }
            
        return ans;
    }
};