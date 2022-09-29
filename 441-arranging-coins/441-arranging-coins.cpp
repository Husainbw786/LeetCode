class Solution {
public:
    int arrangeCoins(int n) {
        int nums = n;
        if (n == 1)
        {
            return 1;
        }
        for(int i=1;i<=n;i++)
        {
            nums = nums - i;
            if(nums < 0)
            {
                return i-1;
            }
        }
        return 0;
    }
};