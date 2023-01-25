class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     
        int n = matrix.size();
        int m = matrix[0].size();
        int i,j;
        vector<vector<int>>v(n,vector<int>(m,0));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                v[i][j] = matrix[i][j];
            }
        }
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(v[i][j] == 0)
                {
                
                  int p = i;
                  int q = j;
                  int x = i;
                  int y = j;  
                    while(x < n)
                    {
                        matrix[x][j] = 0;
                        x++;
                    }
                    while(p >= 0)
                    {
                        matrix[p][j] = 0;
                        p--;
                    }
                    while(y < m)
                    {
                        matrix[i][y] = 0;
                        y++;
                    }
                    while(q >= 0)
                    {
                        matrix[i][q] = 0;
                        q--;
                    }
              }
           }
        }
       
    }
};