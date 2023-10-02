//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int>ans;
    void dfs(int i, vector<int>adj[], vector<int>&vis)
    {
        if(vis[i] == 1)
        {
            return;
        }
        vis[i] = 1;
        ans.push_back(i);
        for(auto x : adj[i])
        {
           
            dfs(x,adj,vis);
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
    int i;
    vector<int>vis(V,0);
    
    for(i=0;i<V;i++)
    {
        if(!vis[i])
        {
            dfs(i,adj,vis);
        }
    }
     return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends