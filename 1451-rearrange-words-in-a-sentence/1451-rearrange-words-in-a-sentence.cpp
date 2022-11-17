class Solution {
public:
    string arrangeWords(string text) {
        
        map<int,vector<string>>mp;
        int i;
        text[0] = tolower(text[0]);
        string temp = "";
        for(i=0;i<text.size();i++)
        {
            if(text[i] == ' ')
            {
                int x = temp.size();
                mp[x].push_back(temp);
                temp = "";
            }
            else
            {
                temp += text[i];
            }
        }
        string ans = "";
        mp[temp.size()].push_back(temp);
        for(auto x : mp)
        {
            for(auto it : x.second)
            {
                ans += it;
                ans += ' ';
            }
        }
        ans.pop_back();
        ans[0] = toupper(ans[0]);
        return ans;
    }
};