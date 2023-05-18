class Solution {
public:
    int kthFactor(int n, int k) {
        
        int i;
        int x = k;
    
        for(i=1;i<=n;i++)
        {
            if(n % i == 0)
            {
                x--;
                if(x == 0)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};