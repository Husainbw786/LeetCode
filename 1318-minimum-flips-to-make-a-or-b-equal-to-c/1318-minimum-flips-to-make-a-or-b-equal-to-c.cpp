class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        int ans = 0;
        while(a || b || c)
        {
            if((c & 1) && !(a&1) && !(b&1))            
            {
                ans++;
            }
            else if(!(c&1))
            {
               if(a&1)
               {
                   ans++;
               }
               if(b&1)
               {
                   ans++;
               }
            }
          a = a >> 1;
          b = b >> 1;
          c = c >> 1;  
        }
        return ans;
    }
};



    