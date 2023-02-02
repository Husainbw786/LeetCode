class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
       int i;
       bool  ans = true;
        map<char,int>mp;
        for(i=0;i<order.size();i++)
        {
            mp[order[i]] = i;
        }
        for(i=0;i<words.size()-1;i++)
        {
            string a = words[i];
            string b = words[i+1];
            bool flag = true;
            bool diff = false;
            for(int j = 0; j < min(a.size(),b.size());j++)
            {
                if(a[j] != b[j] && mp[a[j]] > mp[b[j]])
                {
                    flag = false;
                    diff = true;
                    break;
                }
                else if(a[j] != b[j] && mp[a[j]] < mp[b[j]])
                {
                    flag = true;
                    diff = true;
                    break;
                }
            }
                if(!diff && a.size() > b.size())
                {
                    flag = false;
                }
                if(!flag)
                {
                    return false;
                }
            
            
        }
        return true;
    }
};