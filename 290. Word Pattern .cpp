class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,char>mp;
        unordered_map<char,string>mp2;
        vector<string>v;
        int i;
        int n = s.size();
        string temp = "";
        for(i=0;i<n;i++)
        {
            if(s[i] != ' ')
            {
                temp += s[i];
            }
            else
            {
                v.push_back(temp);
                cout << temp << " ";
                temp = "";
            }
        }
        
        
        v.push_back(temp);
        n = v.size();
        if( n != pattern.size())
        {
            return false;
        }
        for(i=0;i<n;i++)
        {
          if(mp.find(v[i]) != mp.end())
          {
              if(mp[v[i]] == pattern[i])
              {
                  continue;
              }
              else
              {
                return false;
              }
          }
          else
          {
              mp[v[i]] = pattern[i];
          }  
        }
        for(i=0;i<n;i++)
        {
          if(mp2.find(pattern[i]) != mp2.end())
          {
              if(mp2[pattern[i]] == v[i])
              {
                  continue;
              }
              else
              {
                return false;
              }
          }
          else
          {
              mp2[pattern[i]] = v[i];
          }  
        }
        return true;
    }
};
