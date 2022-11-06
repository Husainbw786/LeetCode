class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int n = s.size();
        int i;
        string check = "";
        int k = n;
        for(i=0;i<words.size();i++)
        {
            if(k == 0)
            {
                break;
            }
           string temp = words[i];
           for(auto x : temp)
           {
               check += x;
               k--;
           }
        }
        if(check.size() != s.size())
        {
            return false;
        }
        for(i=0;i<check.size();i++)
        {
            if(check[i] != s[i])
            {
                return false;
            }
        }
        return true;
    }
};