class Solution {
public:
    vector<int> evenOddBit(int n) {
     
        int even = 0;
        int odd = 0;
        int count = 0;
        while(n)
        {
            if(n&1 == 1 && count % 2 == 0)
            {
                even++;
            }
            if(n&1 == 1 && count % 2 != 0)
            {
                odd++;
            }
            n = n>>1;
            count++;
        }
        return {even,odd};
    }
};