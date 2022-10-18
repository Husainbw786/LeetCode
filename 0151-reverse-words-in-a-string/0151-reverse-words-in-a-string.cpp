class Solution {
public:
    string reverseWords(string s) {
        
        vector<string>v;
        int n = s.size();
        string ans = "";
        int i;
        for(i=0;i<n;i++)
        {
             string temp;
            if(s[i] == ' ')
            {
               continue;
            }
            while(s[i] != ' ' && i < n)
            {
                temp += s[i];
                i++;
            }
            v.push_back(temp);
        }
        reverse(v.begin(),v.end());
         n = v.size();
        for(i=0;i<n;i++)
        {
            ans += v[i];
            ans += ' ';
        }
        ans.pop_back();
        return ans;
    }
};