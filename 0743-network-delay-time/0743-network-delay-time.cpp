class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
         vector<pair<int,int>>adj[n+1];
         for(auto x : times)
         {
             int u = x[0];
             int v = x[1];
             int w = x[2];
             adj[u].push_back({v,w});
         }
         priority_queue< pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>> >pq;
         pq.push({0,k});
         vector<int>dis(n+1,1e9);
         dis[k] = 0;
         dis[0] = 0;
         while(!pq.empty())
         {
             int node = pq.top().second;
             int time = pq.top().first;
             pq.pop();
             
             for(auto x : adj[node])
             {
                 int adjNode = x.first;
                 int adjTime = x.second;
                 if(time + adjTime < dis[adjNode])
                 {
                     dis[adjNode] = time + adjTime;
                     pq.push({time+adjTime,adjNode});
                 }
             }
         }
        int maxi = 0;
        for(int i=1;i<=n;i++)
        {
            if(dis[i] == 1e9)
            {
                return -1;
            }
            maxi = max(maxi,dis[i]);
        }
        return maxi;
    }
};