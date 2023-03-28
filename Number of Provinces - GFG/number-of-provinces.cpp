//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void dfs(int x,vector<vector<int>>&adjls,vector<int>&vis)
    {
        vis[x] = 1;
        for(auto it : adjls[x])
        {
            if(vis[it] == 0)
            {
                dfs(it,adjls,vis);
            }
        }
    }
  
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<vector<int>>adjls(V);
        vector<int>vis(V,0);
        int i,j;
        for(i=0;i<adj.size();i++)
        {
            for(j=0;j<adj[0].size();j++)
            {
                if(adj[i][j] == 1 && i != j)
                {
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        int count = 0;
        for(i=0;i<V;i++)
        {
            if(vis[i] == 0)
            {
                count++;
                dfs(i,adjls,vis);
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends