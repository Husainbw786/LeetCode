class Solution {
public:
void DFS(int src, int dest, vector<vector<int>> &graph, vector<int> &path, vector<vector<int>> &paths)
{
path.push_back(src);
if(src ==  dest)
{
paths.emplace_back(path);
}
for(auto neigh :  graph[src])
{
DFS(neigh,dest,graph,path,paths);
}
path.pop_back();
return;
}
vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
vector<vector<int>> paths;
vector<int> path;
if(empty(graph) == true) return paths;
DFS(0,graph.size()-1, graph, path, paths);
return paths;
}
};