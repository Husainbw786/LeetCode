class Solution {
public:
    int trailingZeroes(int n) {
        
        int i;
        int count = 0;
        for(i=5;i<=n;i+=5)
        {
            int x = i;
            while(x % 5 == 0)
            {
                count++;
                x = x /5;
            }
        }
        return count;
    }
};