class Solution {
public:
    
    void dfs(int x,int y,vector<vector<int>>& land,  vector<vector<int>>&vis ,int &i_max,int &j_max)
    {
        if(x < 0 || y < 0 || x >= land.size() || y >= land[0].size() || vis[x][y] == 1 || land[x][y] == 0)
        {
            return;
        }
        i_max = max(i_max,x);
        j_max = max(j_max,y);
        vis[x][y] = 1;
        dfs(x+1,y,land,vis,i_max,j_max);
        dfs(x-1,y,land,vis,i_max,j_max);
        dfs(x,y+1,land,vis,i_max,j_max);
        dfs(x,y-1,land,vis,i_max,j_max);
    }
    
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
         
        int n = land.size();
        int m = land[0].size();
        vector<vector<int>>ans;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(land[i][j] == 1 && vis[i][j] == 0)
                {
                    int i_max = i , j_max = j;
                    dfs(i,j,land,vis,i_max,j_max);
                    ans.push_back({i,j,i_max,j_max});
                }
                
            }
        }
        return ans;
    }
};