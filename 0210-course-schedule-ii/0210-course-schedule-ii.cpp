class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
        int i;
        vector<int>adj[2000];
        queue<int>q;
        for(auto x : prerequisites)
        {
            adj[x[1]].push_back(x[0]);
        }
        vector<int>indegree(2000,0);
        for(i=0;i<numCourses;i++)
        {
            for(auto x : adj[i])
            {
                indegree[x]++;
            }
        }
        for(i=0;i<numCourses;i++)
        {
            if(indegree[i] == 0)
            {
                q.push(i);
            }
        }
        vector<int>topo;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto x : adj[node])
            {
                indegree[x]--;
                if(indegree[x] == 0)
                {
                    q.push(x);
                }
            }
        }
        if(topo.size() == numCourses)
        {
            return topo;
        }
        return {};
    }
};