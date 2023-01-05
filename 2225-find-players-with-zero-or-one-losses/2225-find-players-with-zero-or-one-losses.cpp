class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        vector<vector<int>>ans;
        vector<int>won,lost;
        int i;
        int n = matches.size();
        map<int,int>mp;
        set<int>st;
        for(i=0;i<n;i++)
        {
            mp[matches[i][1]]++;
        }
        for(i=0;i<n;i++)
        {
            int x = matches[i][0];
            if(mp.find(x) == mp.end())
            {
                st.insert(x);
            }
        }
        for(auto s : st)
        {
            won.push_back(s);
        }
        ans.push_back(won);
        for(auto x : mp)
        {
            if(x.second == 1)
            {
                lost.push_back(x.first);
            }
        }
        ans.push_back(lost);
        return ans;
    }
};