class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        unordered_map<string,string>mp;
        int i;
        int n = knowledge.size();
        string ans = "";
        for(i=0;i<n;i++)
        {
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        n = s.size();
        for(i=0;i<n;i++)
        {
            if(s[i] == '(')
            {
                i++;
                string temp = "";
                string temp2 = "";
                while(s[i] != ')')
                {
                    temp += s[i];
                    i++;
                }
                if(mp.find(temp) != mp.end())
                {
                    temp2 = mp[temp];
                }
                else
                {
                    temp2 = '?';
                }
                ans += temp2;
                temp.clear();
                temp2.clear();
            }
            else
            {
                ans += s[i];
            }
        }
        return ans;
    }
};