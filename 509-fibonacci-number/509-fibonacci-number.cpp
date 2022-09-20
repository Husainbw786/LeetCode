class Solution {
public:
    int fib(int n) {
       int i;
        if(n <= 0)
        {
            return 0;
        }
       int sum = 1;
        int a = 0;
        int b = 1;
       
        for(i=1;i<n;i++)
        {
            sum = a + b;
            a = b;
            b = sum;
            
        }
        return sum;
    }
};