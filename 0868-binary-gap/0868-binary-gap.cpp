class Solution {
public:
    int binaryGap(int n) {
     
        int count = 0;
        int maxi = 0;
        int dis = INT_MIN;
        int one_count = 0;
        while(n)
        {
            if(n&1)
            {
                maxi = max(dis,maxi);
                dis = 0;
                one_count++;
            }
            dis++;
            n = n >> 1;
        }
        if(one_count < 2)
        {
            return 0;
        }
       return maxi;   
    }
};