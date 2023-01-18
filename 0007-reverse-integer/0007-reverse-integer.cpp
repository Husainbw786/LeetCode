class Solution {
public:
  long  int reverse(int x) {
         
      long int temp=0;
       
        while(x !=0)
        {
            int rem=x%10;
            temp = temp*10 + rem;
            x/=10;
        }
        if(temp>INT_MAX || temp<INT_MIN)
        {
            return 0;
        }
       
        return temp;
    }
};