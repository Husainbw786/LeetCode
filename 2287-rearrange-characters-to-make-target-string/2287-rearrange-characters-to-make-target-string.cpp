class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        unordered_map<char,int>mp;
        int n = s.size();
        int i;
        for(i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int count = 0;
        n = target.size();
        while(true)
        {
            bool flag = false;
            for(i=0;i<n;i++)
            {
                if(mp.find(target[i]) != mp.end() && mp[target[i]] > 0)
                {
                    mp[target[i]]--;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
            if(!flag)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        return count;
    }
};