class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        unordered_map<char,int>mp;
        vector<string>v;
        int n = text.size();
        string temp = "";
        int i;
        for(i=0;i<brokenLetters.size();i++)
        {
            mp[brokenLetters[i]]++;
        }
        for(i=0;i<n;i++)
        {
           if(text[i] != ' ')
           {
               temp += text[i];
           }
           else
           {
            v.push_back(temp);
            temp.clear();
           }
        }
        v.push_back(temp);
        int count = 0;
        for(i=0;i<v.size();i++)
        {
            string check = v[i];
            for(int j=0;j<check.size();j++)
            {
                if(mp.find(check[j]) != mp.end())
                {
                    count++;
                    break;
                }
            }
        }
        
        return v.size() - count;
    }
};