class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        unordered_map<int,int>mp;
        int i;
        int len = changed.size();
        if(len % 2 != 0)
        {
            return {};
        }
        sort(changed.begin(),changed.end());
        
        for(i=0;i<len;i++)
        {
            mp[changed[i]]++;
        }
        vector<int>v;
        for(i=0;i<len;i++)
        {
            if(mp[changed[i]] && mp[changed[i]*2])
            {
                v.push_back(changed[i]);
                mp[changed[i]*2]--;
                mp[changed[i]]--;
            }
            else if(mp[changed[i]] && !mp[changed[i]*2])
            {
                return {};
            }
        }
        return v;
    }
};