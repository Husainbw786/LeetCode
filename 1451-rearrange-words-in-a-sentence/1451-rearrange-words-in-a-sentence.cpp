class Solution {
public:
    
    static bool cmp(pair<string,int>&a,pair<string,int>&b)
    {
        if(a.first.size() == b.first.size())
        {
            return a.second < b.second;
        }
        return a.first.size() < b.first.size();
    }
    
    string arrangeWords(string text) {
        
        int n = text.size();
        text[0] = tolower(text[0]); 
        vector<pair<string,int>>v;
        int i;
        string temp = "";
        for(i=0;i<n;i++)
        {
            if(text[i] != ' ')
            {
                temp += text[i];
            }
            else
            {
                v.push_back({temp,i});
                temp = "";
            }
        }
        v.push_back({temp,i});
        sort(v.begin(),v.end(),cmp);
        string ans;
        for(i=0;i<v.size();i++)
        {
            ans += v[i].first;
            ans += ' ';
        }
        ans.pop_back();
        ans[0] = ans[0] - 32;
        return ans;
    }
};