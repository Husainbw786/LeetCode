class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int>mp;
        int n = words.size();
        int i;
        for( i=0;i<n;i++)
        {
            mp[words[i]]++;
        }
        priority_queue<pair<int,string>>pq;
        for(auto x : mp)
        {
            pq.push({-x.second,x.first});
            if(pq.size() > k)
            {
                pq.pop();
            }
        }
        vector<string>ans;
        
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};