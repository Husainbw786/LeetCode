class Solution {
public:
    
   void dfs(vector<vector<int>>& rooms,vector<int>&vis,int i)
   {
       if(i > rooms.size())
       {
           return;
       }
       vis[i] = 1;
       for(auto x : rooms[i])
       {
           if(vis[x] == 0)
           {
               dfs(rooms,vis,x);
           }
       }
       
   }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n = rooms.size();
        vector<int>vis(n,0);
        dfs(rooms,vis,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i] == 0)
            {
                return false;
            }
        }
        return true;
    }
};