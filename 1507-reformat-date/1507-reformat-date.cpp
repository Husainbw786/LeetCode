class Solution {
public:
    string reformatDate(string date) {
        
        vector<string>v;
        vector<string> month = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        int n = date.size();
            int i;
        string temp = "";
        for(i=0;i<n;i++)
        {
            if(date[i] != ' ')
            {
              temp += date[i];
            }
            else
            {
                v.push_back(temp);
                temp = "";
            }
        }
            v.push_back(temp);
            string ans = "";
            ans += v[2];
            ans += '-';
            string x = v[1];
            int y;
            for(i=0;i<month.size();i++)
            {
                if(x == month[i])
                {
                    y = i+1;
                    break;
                }
            }
            string p = "";
            p += to_string(y);
            string temp2 = "";

            if(p.size() == 1)
            {
                 temp2 += '0';
                 temp2 += p;
            }
            else
            {
                temp2 += p;
            }
            ans += temp2;
            ans += '-';
            
            string temp3 = v[0];
            string temp4 = "";
            if(temp3.size() == 4)
            {
                temp3.pop_back();
                temp3.pop_back(); 
                ans += temp3;
            }
        
            else
            {
                 temp4 += '0';
                temp4 += temp3;
                temp4.pop_back();
                temp4.pop_back();
                ans += temp4;
                
            }
            
     return ans;
    }
};