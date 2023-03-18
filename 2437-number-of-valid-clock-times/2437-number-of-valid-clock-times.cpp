class Solution {
public:
    int countTime(string time) {
        
        int ans = 1;
        if(time[0] == '?')
        {
            if((time[1] - '0') < 4)
            {
                ans = ans*3;
            }
            else
            {
                ans = ans*2;
            }
        }
        if(time[1] == '?')
        {
            if(time[0] == '?')
            {
                ans = ans*12;
            }
            else if(time[0] == '2')
            {
                ans = ans*4;
            }
            else
            {
             ans = ans*10;   
            }
        }
        if(time[3] == '?')
        {
            ans = ans*6;
        }
        if(time[4] == '?')
        {
            ans = ans*10;
        }
        return ans;
    }
};