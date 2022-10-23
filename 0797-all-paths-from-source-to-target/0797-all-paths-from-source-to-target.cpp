class Solution {
public:
    
    void dfs(vector<vector<int>>& graph, vector<vector<int>>&paths, vector<int>temp,int curr)
    {
        temp.push_back(curr);
        if(curr == graph.size()-1)
        {
            paths.push_back(temp);
        }
        for(auto x : graph[curr])
        {
            dfs(graph,paths,temp,x);
        }
        temp.pop_back();
        return;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        vector<vector<int>>paths;
        int n = graph.size();
        dfs(graph,paths,{},0);
        return paths;
    }
};