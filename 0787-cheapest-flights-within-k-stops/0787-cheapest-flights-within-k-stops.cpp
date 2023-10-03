class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        vector<pair<int,int>>adj[n];
        int i;
        for(i=0;i<flights.size();i++)
        {
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
        vector<int>dis(n,INT_MAX);
        dis[src] = 0;
        queue<pair<pair<int,int>,int>>q;
        q.push({{0,src},0});
        while(!q.empty())
        {
            int stops = q.front().first.first;
            int city = q.front().first.second;
            int cost = q.front().second;
            q.pop();
            if(stops > k )
            {
                continue;
            }
            for(auto x : adj[city])
            {
                int wt = x.second;
                int adjNode = x.first;
                if(wt + cost < dis[adjNode])
                {
                    dis[adjNode] = wt+cost;
                    q.push({{stops+1,adjNode},wt+cost});
                }
            }
        }
        if(dis[dst] == INT_MAX)
        {
            return -1;
        }
        return dis[dst];
        
        
    }
};