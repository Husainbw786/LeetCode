class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>>v(n,vector<int>(n,0));
        int i;
        int count = 1;
        int left = 0;
        int right = n-1;
        int top = 0;
        int buttom = n-1;
        int direction = 1;
        while(left <= right && top <= buttom)
        {
            if(direction == 1)
            {
                for(i=left;i<=right;i++)
                {
                    v[top][i] = count;
                    count++;
                }
                direction = 2;
                top++;
            }
            if(direction == 2)
            {
                for(i=top;i<=buttom;i++)
                {
                    v[i][buttom] = count;
                    count++;
                }
                direction = 3;
                right--;
            }
            if(direction == 3)
            {
                for(i=right;i>=left;i--)
                {
                    v[buttom][i] = count;
                    count++;
                }
                direction = 4;
                buttom--;
            }
            if(direction == 4)
            {
                for(i=buttom;i>=top;i--)
                {
                    v[i][left] = count;
                    count++;
                }
                direction = 1;
                left++;
            }
        }
        return v;
    }
};