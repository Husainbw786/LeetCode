class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        int V = graph.size();
        vector<int>adj[V];
        int i;
        for(i=0;i<V;i++)
        {
          for(auto x : graph[i])
          {
              adj[i].push_back(x);
          }
        }
        vector<int>adjRev[V];
        for(i=0;i<V;i++)
        {
            for(auto x : adj[i])
            {
                adjRev[x].push_back(i);
            }
        }
        queue<int>q;
         vector<int>indegree(V,0);
        for(i=0;i<V;i++)
        {
            for(auto x : adjRev[i])
            {
                 indegree[x]++;
            }
        }
        for(i=0;i<indegree.size();i++)
        {
            if(indegree[i] == 0)
            {
                q.push(i);
            }
        }
        vector<int>ans;
        while(!q.empty())
        {
            int temp = q.front();
            q.pop();
            ans.push_back(temp);
            for(auto x : adjRev[temp])
            {
                indegree[x]--;
                if(indegree[x] == 0)
                {
                    q.push(x);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};