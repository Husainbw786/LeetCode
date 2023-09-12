class Solution {
public:
    int minJumps(vector<int>& arr) {
        
        int n = arr.size();
        unordered_map<int,vector<int>>mp;
        int i;
        for(i=0;i<n;i++)
        {
            if(mp.find(arr[i]) == mp.end())
            {
                mp[arr[i]] = {i};
            }
            else
            {
               mp[arr[i]].push_back(i); 
            }
            
        }
        queue<pair<int,int>>q;
        q.push({0,0});
        vector<int>vis(n,0);
        vis[0] = 1;
        while(!q.empty())
        {
            int i = q.front().first;
            int dis = q.front().second;
            q.pop();
            if(i == n-1)
            {
                return dis;
            }
            else
            {
                if(i-1 >= 0 && vis[i-1] == 0)
                {
                    q.push({i-1,dis+1});
                }
                if(i+1< n && vis[i+1] == 0)
                {
                    q.push({i+1,dis+1});
                }
                for(auto x : mp[arr[i]])
                {
                    if(!vis[x])
                    {
                        q.push({x,dis+1});
                        vis[x] = 1;
                    }
                }
                mp[arr[i]] = {};
            }
        }
        return 0;
    }
};