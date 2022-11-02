class Solution {
public:
    int countEven(int num) {
        
        int count =0;
        int i;
        for(i=1;i<=num;i++)
        {
            int n = i;
            int sum = 0;
            while(n>0)
            {
                int rem = n % 10;
                sum += rem;
                n = n /10;
            }
            if(sum % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};