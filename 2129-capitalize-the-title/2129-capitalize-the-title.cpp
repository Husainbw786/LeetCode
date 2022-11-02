class Solution {
public:
    string capitalizeTitle(string title) {
        
        vector<string>v;
        int n = title.size();
        string temp = "";
        int i;
        for(i=0;i<n;i++)
        {
            if(title[i] != ' ')
            {
                if(title[i] >= 'A' && title[i] <= 'Z')
                {
                    temp += (title[i] + 32);
                }
                else
                {
                    temp += title[i];
                }
            }
            else
            {
                v.push_back(temp);
                temp = "";
            }
        }
        v.push_back(temp);
        
        string ans = "";
        for(i=0;i<v.size();i++)
        {
             string x = v[i];
            if(x.size() > 2)
            {
                 char a = x[0] - 32;
                 ans += a;
                 for(int j=1;j<x.size();j++)
                 {
                     ans += x[j];
                 }
                ans += ' ';
            }
            else
            {
                ans += x;
                ans += ' ';
            }
            
        }
        ans.pop_back();
        return ans;
    }
};