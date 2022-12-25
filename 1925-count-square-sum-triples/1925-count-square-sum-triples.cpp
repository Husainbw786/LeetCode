class Solution {
public:
    int countTriples(int n) {
        
        int i,j,k;
        int count = 0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i == j)
                {
                    continue;
                }
                for(k=j+1;k<=n;k++)
                {
                    int x = i*i;
                    int y = j*j;
                    int z = k*k;
                    if(x + y == z)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};