class Solution {
public:
    int findComplement(int num) {
        
        int ans = 0;
        int i = 0;
        while(num)
        {
            if((num & 1) == 0)
            {
                ans += (1 << i);
            }
           i++;
           num = num >> 1; 
        }
        return ans;
    }
};