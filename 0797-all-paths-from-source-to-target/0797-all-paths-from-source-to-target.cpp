class Solution {
public:
    
    void dfs(vector<vector<int>>& graph, vector<bool>&vis, vector<vector<int>>&paths, vector<int>temp,int curr)
    {
        temp.push_back(curr);
        vis[curr] = true;
        if(curr == graph.size()-1)
        {
            paths.push_back(temp);
            return;
        }
        for(auto x : graph[curr])
        {
            dfs(graph,vis,paths,temp,x);
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        vector<vector<int>>paths;
        int n = graph.size();
        vector<bool>vis(n,false);
        dfs(graph,vis,paths,{},0);
        return paths;
    }
};