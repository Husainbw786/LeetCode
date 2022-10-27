class Solution {
public:
    int xorOperation(int n, int start) {
        
        if(n == 0)
        {
            return 0;
        }
        int ans = 0;
        int i;
        for(i=0;i<n;i++)
        {
            ans = ans^(start + 2*i);
        }
        return ans;
    }
};