class Solution {
public:
    
    bool dfs(int src, int des, vector<int> adj[], vector<int> &vis){
        vis[src] = 1;
        if(src == des)
        {
            return true;
        }
        
        for(auto i: adj[src])
        {
            if(!vis[i])
            {
                if(dfs(i, des, adj, vis))
                {
                    return true;
                }
            }
        }
        return false;
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<int> adj[n];
        for(auto i: edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
        vector<int> vis(n, 0);
        
        return dfs(source, destination, adj, vis);
        
    }
};