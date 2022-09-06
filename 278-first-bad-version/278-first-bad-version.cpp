// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    
    int Check(int low, int high)
    {
        int mid = low + (high-low)/2;
        if(low <= high)
        {
            if(isBadVersion(mid) && !isBadVersion(mid-1))
            {
                return mid;
            }
            else if(!isBadVersion(mid))
            {
                return Check(mid+1,high);
            }
            else
            {
                return Check(low,mid-1);
            }
        }
        return high;
    }
    
    int firstBadVersion(int n) {
        
        if(n == 1)
        {
            return 1;
        }
        return Check(2,n);
    }
};