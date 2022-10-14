class Solution {
public:
    string sortSentence(string s) {
        string temp = "";
        int n = s.size();
        map<int,string>mp;
        for(int i=0;i<n;i++)
        {
            if(isalpha(s[i]))
            {
                temp.push_back(s[i]);
            }
            if(isdigit(s[i]))
            {
                mp[s[i]] = temp;
                temp.clear();
            }
        }
        string ans = "";
        for(auto x : mp)
        {
            ans += x.second;
            ans += ' ';
        }
        ans.pop_back();
        return ans;
        
    }
};