class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c == 0 || c == 1)
        {
            return true;
        }
        int r = sqrt(c);
        cout << r ;
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