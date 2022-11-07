class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        int n = pattern.size();
        int j = 0;
        int i = 0;
        vector<string>ans;
        while(j < words.size())
        {
            string s1 = words[j];
            string s2 = pattern;
            bool flag = false;
            for(i=0;i<n;i++)
            {
                if(!mp1[s1[i]] && !mp2[s2[i]])
                {
                    mp1[s1[i]] = s2[i];
                    mp2[s2[i]] = s1[i];
                }
                else
                {
                    if(mp1[s1[i]] == s2[i])
                    {
                        continue;
                    }
                    else
                    {
                        flag = true;
                        break;
                    }
                }
            }
            if(!flag)
            {
               ans.push_back(s1); 
            }
            mp1.clear();
            mp2.clear();
            j++;
        }
        return ans;
    }
};