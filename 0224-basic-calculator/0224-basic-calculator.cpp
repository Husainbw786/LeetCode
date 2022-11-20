class Solution {
public:
    
    int string_to_int(string st)
    {
        int sum = 0;
        for(int i=0;i<st.size();i++)
        {
            sum = sum*10 + (st[i] - '0');
        }
        return sum;
    }
    
    
    int calculate(string s) {
        
        int num = 0, i = 0;
        int ans = 0;
        int sign = 1;
        stack<int>st;
        int n = s.size();
        
        while(i < n)
        {
            if(isdigit(s[i]))
            {
                string number;
                while(isdigit(s[i]))
                {
                    number += s[i];
                    i++;
                }
                i--;
                num = string_to_int(number);
                num = num * sign;
                ans += num;
            }
            else if(s[i] == '+')
            {
                sign = 1;
            }
            else if(s[i] == '-')
            {
                sign = -1;
            }
            else if(s[i] == '(' )
            {
                st.push(ans);
                st.push(sign);
                ans =0;
                sign = 1;
            }
            else if(s[i] == ')')
            {
                ans *= st.top();
                st.pop();
                ans += st.top();
                st.pop();
            }
            i++;
        }
        return ans;
    }
};