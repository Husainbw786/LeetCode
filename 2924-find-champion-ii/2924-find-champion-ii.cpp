class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        
       // int n = edges.size();
      //  int m = edges[0].size();
        int ans = -1;
        vector<int>adj[n];
        for(auto x : edges)
        {
            adj[x[0]].push_back(x[1]);
        }
        vector<int>indegree(n,0);
        int i;
        for(i=0;i<n;i++)
        {
            for(auto x : adj[i])
            {
                indegree[x]++;
            }
        }
        bool flag = false;
        for(i=0;i<n;i++)
        {
            if(indegree[i] == 0)
            {
                if(flag)
                {
                    return -1;
                }
                ans = i;
                flag = true;
            }
        }
        return ans;
    }
};
