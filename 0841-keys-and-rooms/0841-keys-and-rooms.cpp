class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
     
        int n = rooms.size();
        vector<int>vis(n,0);
        n = rooms[0].size();
        int i;
        queue<int>q;
        for(i=0;i<n;i++)
        {
            q.push(rooms[0][i]);
        }
        vis[0] = 1;
        while(!q.empty())
        {
            int x = q.front();
            int size = rooms[x].size();
            for(int i=0;i<size;i++)
            {
                if(vis[rooms[x][i]] == 0)
                {
                    q.push(rooms[x][i]);
                }
            }
            vis[x] = 1;
            q.pop();
        }
        for(int i=0;i<vis.size();i++)
        {
            if(vis[i] == 0)
            {
                return false;
            }
        }
        return true;
    }
};