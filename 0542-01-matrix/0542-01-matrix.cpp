class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(mat[i][j] == 0)
                {
                    q.push({{i,j},0});
                    vis[i][j] = 1;
                }
            }
        }
        
        while(!q.empty())
        {
            int x = q.front().first.first;
            int y = q.front().first.second;
            int dis = q.front().second;
            q.pop();
            if(x-1 >= 0 && mat[x-1][y] == 1 && !vis[x-1][y])
            {
                mat[x-1][y] = dis + 1;
                q.push({{x-1,y},dis+1});
                vis[x-1][y] = 1;
            }
            if(x+1 <  n && mat[x+1][y] == 1 && !vis[x+1][y])
            {
                mat[x+1][y] = dis + 1;
                q.push({{x+1,y},dis+1});
                vis[x+1][y] = 1;
            }
            if(y-1 >= 0 && mat[x][y-1] == 1 && !vis[x][y-1])
            {
                mat[x][y-1] = dis + 1;
                q.push({{x,y-1},dis+1});
                vis[x][y-1] = 1;
                
            }
            if(y+1 < m && mat[x][y+1] == 1 && !vis[x][y+1]) 
            {
                mat[x][y+1] = dis+1;
                q.push({{x,y+1},dis+1});
                vis[x][y+1] = 1;
            }
            
        }
        return mat;
    }
};