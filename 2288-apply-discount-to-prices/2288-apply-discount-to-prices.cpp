class Solution {
public:
    string discountPrices(string sentence, int discount) {
        
        int n = sentence.size();
        int i;
        vector<string>v;
        string temp = "";
        for(i=0;i<n;i++)
        {
            
            if(sentence[i] == ' ')
            {
                v.push_back(temp);
                temp = "";
            }
            else
            {
               temp += sentence[i]; 
            }
        }
        v.push_back(temp);
        for(i=0;i<v.size();i++)
        {
            string x = v[i];
            if(x == "$")
            {
                continue;
            }
            if(x[0] != '$')
            {
                continue;
            }
            int j = 1;
            long double y = 0;
            bool flag = true;
            while(j < x.size())
            {
                if(x[j] >= '0' && x[j] <= '9')
                {
                    int temp1 = x[j] - '0';
                    y = y*10 + temp1;
                    j++;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if(!flag)
            {
                continue;
            }
            
            y -= (y/100)*discount;
            //cout << y << " ";
            string t = to_string(y);
            string t2 = "";
            int  p = 0;
            while(p < t.size())
            {
                if(t[p] != '.')
                {
                    t2 += t[p];
                    p++;
                }
                else
                {
                    break;
                }
            }
            
            t2 += t[p];
            p++;
            t2 += t[p];
            p++;
            t2 += t[p];
            string a = "$";
            a += t2;
            v[i] = a;
        }
        string ans = "";
        for(auto x : v)
        {
            ans += x;
            ans += ' ';
        }
        ans.pop_back();
        return ans;
    }
};