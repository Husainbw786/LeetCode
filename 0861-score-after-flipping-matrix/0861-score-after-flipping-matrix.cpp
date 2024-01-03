class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        for(i=0;i<n;i++)
        {
            if(grid[i][0] == 0)
            {
                for(j=0;j<m;j++)
                {
                    if(grid[i][j] == 1)
                    {
                        grid[i][j] = 0;
                    }
                    else
                    {
                        grid[i][j] = 1;
                    }
                }
            }
        }
        for(i=1;i<m;i++)
        {
            int count0 = 0;
            int count1 = 0;
            for(j=0;j<n;j++)
            {
                if(grid[j][i] == 0)
                {
                    count0++;
                }
                else
                {
                    count1++;
                }
            }
            if(count0 > count1)
            {
               for(j=0;j<n;j++)
                {
                    if(grid[j][i] == 0)
                    {
                        grid[j][i] = 1;
                    }
                    else
                    {
                        grid[j][i] = 0;
                    }
                } 
            }
        }
        int sum = 0;
        for(i=0;i<n;i++)
        {
            int count = 0;
            for(j=m-1;j>=0;j--)
            {
               if(grid[i][j] == 1)
               {
                   sum += pow(2,count);
               }
               count++; 
            }
        }
        return sum;   
    }
};