

class Solution {
public:
    
    bool isValid(int i,int j,int n,int m)
    {
      if(i < 0 || j < 0 || i >= n || j >= m)
      {
          return false;
      }
        return true;
    }
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        int i,j;
        vector<vector<bool>> vis (n, vector<bool>(m,0));
        vector<vector<int>> ans (n, vector<int>(m,0));
        queue<pair<int,int>>q;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(mat[i][j] == 0)
                {
                    q.push({i,j});
                    vis[i][j] = true;
                }
            }
        }
        while(!q.empty())
        {
            i = q.front().first;
            j = q.front().second;
            q.pop();
            int dis = ans[i][j];
            
            if( isValid(i-1,j,n,m) && !vis[i-1][j])
            {
                vis[i-1][j] = true;
                ans[i-1][j] = dis + 1;
                q.push({i-1,j});
            }
            if( isValid(i+1,j,n,m) && !vis[i+1][j])
            {
                vis[i+1][j] = true;
                ans[i+1][j] = dis + 1;
                q.push({i+1,j});
            }
            if( isValid(i,j-1,n,m) && !vis[i][j-1])
            {
                vis[i][j-1] = true;
                ans[i][j-1] = dis + 1;
                q.push({i,j-1});
            }
            if( isValid(i,j+1,n,m) && !vis[i][j+1])
            {
                vis[i][j+1] = true;
                ans[i][j+1] = dis + 1;
                q.push({i,j+1});
            }
            
        }
        return ans;
    }
};