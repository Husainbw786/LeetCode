class Solution {
public:
    
   bool canEatBananas(vector<int>&piles, int mid, int h)
    {
        int hours = 0;
        for(auto x : piles)
        {
            int div = x / mid;
            hours += div;
            if(x % mid != 0)
            {
                hours++;
            }
        }
        if(hours <= h)
        {
            return true;
        }
        return false;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int n = piles.size();
        int left = 1;
        int right = 10000000000;
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(canEatBananas(piles,mid,h))
            {
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        return left;
    }
    
    
};