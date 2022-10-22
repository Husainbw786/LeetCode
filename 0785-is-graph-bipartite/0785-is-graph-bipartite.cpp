class Solution {
public:
    
    bool dfs(int node, vector<int>&color, vector<vector<int>>& graph)
    {
        for(auto x : graph[node])
        {
            if(color[x] == -1)
            {
                color[x] = 1 - color[node];
                if(dfs(x,color,graph) == false)
                {
                    return false;
                }
            }
            else if( color[x] == color[node])
            {
                return false;
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
     
        int n = graph.size();
        vector<int>color(n,-1);
        int i;
        for(i=0;i<n;i++)
        {
            if(color[i] == -1)
            {
                if(dfs(i,color,graph) == false)
                {
                    return false;
                }
            }
        }
       return true; 
    }
};