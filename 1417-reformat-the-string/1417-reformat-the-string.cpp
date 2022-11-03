class Solution {
public:
    string reformat(string s) {
     
        string num = "";
        string alpha = "";
        int i;
        int n = s.size();
        for(i=0;i<n;i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                num += s[i];
            }
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                alpha += s[i];
            }
        }
        int x;
        if( num.size() >= alpha.size())
        {
             x = num.size() - alpha.size();
        }
        else
        {
             x = alpha.size() - num.size();
        }
        if(x > 1)
        {
            return "";
        }
        string ans = "";
        i=0;
        int j=0;
        while( i < num.size() || j < alpha.size())
        {
            if(num.size() > alpha.size())
            {
                if(i < num.size())
                {
                    ans += num[i];
                    i++;
                }
                if(j < alpha.size())
                {
                    ans += alpha[j];
                    j++;
                }
            }
            else
            {
              if(j < alpha.size())
                {
                    ans += alpha[j];
                    j++;
                }
                 if(i < num.size())
                {
                    ans += num[i];
                    i++;
                }
            }
            
        }
        return ans;
    }
};