class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
         vector<pair<int,int>>adj[n];
         for(auto x : flights)
         {
             int u = x[0];
             int v = x[1];
             int w = x[2];
             adj[u].push_back({v,w});
         }
         queue<pair<int,pair<int,int>>>q;
         q.push({0,{src,0}});
         vector<int>dis(n,1e9);
         dis[src] = 0;
        while(!q.empty())
        {
            int stops = q.front().first;
            int node = q.front().second.first;
            int cost = q.front().second.second;
            q.pop();
            if(stops > k)
            {
                continue;
            }
            for(auto x : adj[node])
            {
                int adjNode = x.first;
                int wt = x.second;
                if(wt + cost < dis[adjNode])
                {
                    dis[adjNode] = wt+cost;
                    q.push({stops+1,{adjNode,wt+cost}});
                }
                
            }
            
        }
        if(dis[dst] == 1e9)
        {
            return -1;
        }
        return dis[dst];
         
        
        
    }
};