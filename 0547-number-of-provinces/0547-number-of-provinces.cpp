class Solution {
public:
    
    void dfs(int node,vector<int>&vis, vector<int>adj[])
    {
        vis[node] = 1;
        for(auto x : adj[node])
        {
            if(!vis[x])
            {
                dfs(x,vis,adj);
            }
        }
    }
    
    
    int findCircleNum(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int i,j;
        vector<int>adj[n];
        for(i = 0; i < n; i++) {
            int m = grid[i].size();
            for(j = 0; j < m; j++) {
                if(grid[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                }
            }
        }
        int count = 0;
        vector<int> vis(n, 0);
        for(i = 0; i < n; i++) {
            if(!vis[i]) {
                dfs(i, vis, adj);
                count++;
            }
        }
        return count;
    }
};        