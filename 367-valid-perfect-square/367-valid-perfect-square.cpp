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
            sq = mid*mid;
            if(sq == num)
            {
                return true;
            }
            else if(sq > num)
            {
                high = mid - 1;
            }
            else if(sq < num)
            {
                low = mid + 1;
            }
        }
        return false;
        
    }
};