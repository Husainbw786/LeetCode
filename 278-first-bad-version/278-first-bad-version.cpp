// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int low = 1;
        int high = n;
        int ans = 0;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(isBadVersion(mid) && !isBadVersion(mid-1))
            {
                ans = mid;
                break;
            }
            else if(!isBadVersion(mid))
            {
                low = mid + 1;  
            }
            else
            {
                high = mid - 1;
            }
        }
        return ans;
        
    }
};