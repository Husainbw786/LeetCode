class Solution {
public:
    string reorganizeString(string s) {
        
       priority_queue<pair<int,char>>pq;
        int n = s.size();
        unordered_map<char,int>mp;
        int i;
        string ans = "";
        for(i=0;i<n;i++)
        {
           mp[s[i]]++;
        }
        for(auto x : mp)
        {
            pq.push({x.second,x.first});
        }
        while(!pq.empty())
        {
            auto x = pq.top();
            pq.pop();
            int x1 = x.first;
            char c = x.second;
            if(x1 > 0)
            {
                ans += x.second;
                x1--;
            }
            
            if(pq.empty())
            {
                break;
            }
            auto  y = pq.top();
            pq.pop();
            int y1 = y.first;
            char m = y.second;
            if(y1 > 0)
            {
                ans += y.second;
                 y1--;
            }
            if(x1 > 0)
            {
                pq.push({x1,c});
            }
            if(y1 > 0)
            {
                pq.push({y1,m});
            }
            
        }
        if(ans.size() != n)
        {
            return "";
        }
        for(i=ans.size()-1;i>0;i--)
        {
           
            if(ans[i] == ans[i-1])
            {
                ans = "";
                break;
            }
        }
        return ans;
    }
};