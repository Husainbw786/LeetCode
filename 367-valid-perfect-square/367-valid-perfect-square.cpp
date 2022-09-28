class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long long int high = 100000;
        long long int low = 1;
         long long int mid;
        long long sq;
        while(low <= high)
        {
            mid = low + (high - low) / 2;
            if(mid*mid == num)
            {
                return true;
            }
            else if(mid*mid > num)
            {
                high = mid - 1;
            }
            else if(mid*mid < num)
            {
                low = mid + 1;
            }
        }
        return false;
        
    }
};