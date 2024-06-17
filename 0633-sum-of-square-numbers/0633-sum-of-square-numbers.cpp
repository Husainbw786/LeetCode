class Solution {
public:
    bool judgeSquareSum(int c) {
       
        int r = sqrt(c);
        long long low = 0;
        long long high = r;
        while(low <= high)
        {
            long long int sum = (low*low) + (high*high);
            if(sum == c)
            {
                return true;
            }
            else if(sum > c)
            {
                high--;
            }
            else
            {
                low++;
            }
        }
        return false;
    }
};