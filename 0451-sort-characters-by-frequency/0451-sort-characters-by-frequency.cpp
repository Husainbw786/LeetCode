class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        int n = s.size();
        int i;
        for(i=0;i<n;i++)
        {
           mp[s[i]]++;
        }
        vector<pair<int,char>>v;
        priority_queue<pair<int,char>> pq;
        int len = v.size();
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
        }
        string ans = "";
        while(!pq.empty())
        {
            int count = pq.top().first;
            while(count--)
            {
                 ans+= pq.top().second;
            }
            pq.pop();
        }
        return ans;
        
    }
};