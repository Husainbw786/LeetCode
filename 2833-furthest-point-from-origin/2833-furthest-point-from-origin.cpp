class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        
        int n = moves.size();
        int i;
        int l = 0;
        int r = 0;
        int s = 0;
        for(i=0;i<n;i++)
        {
            if(moves[i] == 'R')
            {
                r++;
            }
            else if(moves[i] == 'L')
            {
                l++;
            }
            else
            {
                s++;
            }
        }
        
        int maxi = max(l,r);
        if(l > r)
        {
            return l + s - r;
        }
        
        return r+s-l;
        
    }
};