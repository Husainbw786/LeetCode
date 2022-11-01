class Solution {
public:
    string reformatNumber(string number) {
        
        string x = "";
        int i;
        int n = number.size();
        for(i=0;i<n;i++)
        {
            if(number[i] >= '0'  &&  number[i] <= '9')
            {
                x += number[i];
            }
        }
        string ans = "";
        n = x.size();
        int y = n;
        i =  0;
        while(y > 0)
        {
            if(y > 4)
            {
                y = y-3;
                int p = 3;
                while(p--)
                {
                    ans += x[i];
                    i++;
                }
                ans += '-';
            }
            else if(y == 4)
            {
                y = y - 4;
                int p = 2;
                while(p--)
                {
                    ans += x[i];
                    i++;
                }
                ans += '-';
                p = 2;
                while(p--)
                {
                    ans += x[i];
                    i++;
                }
                ans += '-';
            }
            else if(y == 3)
            {
                y = y - 3;
                int p = 3;
                while(p--)
                {
                    ans += x[i];
                    i++;
                }
            }
            else if(y == 2)
            {
                y = y - 2;
                int p = 2;
                while(p--)
                {
                    ans += x[i];
                    i++;
                }
            }
            
        }
        n = ans.size();
        if(ans[n-1] == '-')
        {
            ans.pop_back();
        }
        return ans;
    }
};