class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        int i,j;
        int count = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(mat[i][j] == 1)
                {
                    int x = i+1;
                    int y = j+1;
                    int p = i-1;
                    int q = j-1;
                    bool flag = false;
                    while(x < n)
                    {
                        if(mat[x][j] == 1)
                        {
                           flag = true;
                           break;
                        }
                        x++;
                    }
                    while(p >= 0 && !flag)
                    {
                        if(mat[p][j] == 1)
                        {
                           flag = true;
                           break;
                        }
                        p--;
                    }
                    while(y < m && !flag)
                    {
                        if(mat[i][y] == 1)
                        {
                           flag = true;
                           break;
                        }
                        y++;
                    }
                    while(q >= 0 && !flag)
                    {
                        if(mat[i][q] == 1)
                        {
                           flag = true;
                           break;
                        }
                        q--;
                    }
                    if(!flag)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};