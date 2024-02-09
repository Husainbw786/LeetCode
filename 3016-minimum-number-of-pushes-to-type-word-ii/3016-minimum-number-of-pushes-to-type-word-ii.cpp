class Solution {
public:
    int minimumPushes(string word) {
        
        int n = word.size();
        int i;
        unordered_map<int,int>mp;
        vector<pair<int,int>>v;
        for(i=0;i<n;i++)
        {
            mp[word[i]]++;
        }
        for(auto x : mp)
        {
            v.push_back({x.second,x.first});
        }
        sort(v.rbegin(),v.rend());
        int ans = 0;
        for(i=0;i<v.size();i++)
        {
           
            if(i < 8)
            {
                ans += v[i].first;
            }
            else if(i < 16)
            {
                ans += (v[i].first * 2);
            }
            else if(i < 24)
            {
                ans += (v[i].first * 3);
            }
            else
            {
                ans += (v[i].first * 4);
            }
            
        }
        return ans;
    }
};