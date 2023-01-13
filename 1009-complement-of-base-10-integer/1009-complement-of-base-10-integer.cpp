class Solution {
public:
    int bitwiseComplement(int n) {
        
        int i = 0;
        int ans = 0;
        if(n == 0)
        {
            return 1;
        }
        while(n)
        {
            if((n & 1) == 0)
            {
                ans += 1 << i;
            }
            i++;
            n = n >> 1;
        }
        return ans;
    }
};