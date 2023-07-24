class Solution {
public:
    
    bool isValid(int i, int j, vector<vector<int>>mat, vector<vector<int>>&vis)
    {
        if(i < 0 || j < 0 || i >= mat.size() || j >= mat[0].size() || vis[i][j] == 1)
        {
            return false;
        }
        return true;
    }
    
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        queue<pair<pair<int,int>,int>>q;
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(mat[i][j] == 0)
                {
                    vis[i][j] = 1;
                  q.push({{i,j},0});  
                }
            }
        }
        
        while(!q.empty())
        {
            int size = q.size();
            while(size--)
            {
                int x = q.front().first.first;
                int y = q.front().first.second;
                int z = q.front().second; 
                q.pop();
                
                if(x+1 < n && vis[x+1][y] == 0 &&  mat[x+1][y] == 1)
                {
                    vis[x+1][y] = 1;
                    mat[x+1][y] = z+1;
                    q.push({{x+1,y},z+1});
                }
                if(x-1 >= 0 && vis[x-1][y] == 0 && mat[x-1][y] == 1)
                {
                    vis[x-1][y] = 1;
                    mat[x-1][y] = z+1;
                    q.push({{x-1,y},z+1});
                }
                if(y+1 < m && vis[x][y+1] == 0 &&  mat[x][y+1] == 1)
                {
                    vis[x][y+1] = 1;
                    mat[x][y+1] = z+1;
                    q.push({{x,y+1},z+1});
                }
                if(y-1 >= 0 && vis[x][y-1] == 0 && mat[x][y-1] == 1)
                {
                    vis[x][y-1] = 1;
                    mat[x][y-1] = z+1;
                    q.push({{x,y-1},z+1});
                }
                
            }
            
        }
        
        return mat;
        
    }
};