class Solution {
public:
    bool makeEqual(vector<string>& words) {
    
        unordered_map<char,int>mp;
        int i;
        int n = words.size();
        for(i=0;i<n;i++)
        {
            string temp = words[i];
            for(auto x : temp)
            {
                mp[x]++;
            }
        }
        bool flag = false;
        for(auto x : mp)
        {
            if(x.second % n == 0)
            {
                continue;
            }
            else
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            return false;
        }
        return true;
    }
};