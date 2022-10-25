class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        vector<string>v1;
        vector<string>v2;
        vector<string>ans;
        int n = s1.size();
        int m = s2.size();
        int i;
        string temp = "";
        for(i=0;i<n;i++)
        {
            if(s1[i] == ' ')
            {
                v1.push_back(temp);
                temp = "";
            }
            else
            {
                temp += s1[i];
            }
        }
        v1.push_back(temp);
        temp = "";
        for(i=0;i<m;i++)
        {
            if(s2[i] == ' ')
            {
                v2.push_back(temp);
                temp = "";
            }
            else
            {
                temp += s2[i];
            }
        }
        v2.push_back(temp);
        unordered_map<string,int>mp1;
        unordered_map<string,int>mp2;
        for(i=0;i<v1.size();i++)
        {
            mp1[v1[i]]++;
        }
        for(i=0;i<v2.size();i++)
        {
            mp2[v2[i]]++;
        }
        for(i=0;i<v1.size();i++)
        {
            if(mp2.find(v1[i]) == mp2.end() && mp1[v1[i]] == 1)
            {
                ans.push_back(v1[i]);
            }
        }
        for(i=0;i<v2.size();i++)
        {
            if(mp1.find(v2[i]) == mp1.end() && mp2[v2[i]] == 1)
            {
                ans.push_back(v2[i]);
            }
        }
        return ans;
    }
};