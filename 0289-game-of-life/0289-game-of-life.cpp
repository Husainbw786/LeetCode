class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>>v;
        int i,j;
        for(i=0;i<n;i++)
        {
            vector<int>temp;
            for(j=0;j<m;j++)
            {
                temp.push_back(board[i][j]);
            }
            v.push_back(temp);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                int x = board[i][j];
                int count = 0;
                if(i-1 >= 0 && v[i-1][j] == 1)
                {
                    count++;
                }
                if((i-1 >= 0 && j-1 >= 0) && v[i-1][j-1] == 1)
                {
                    count++;
                }
                if((i-1 >= 0 && j+1 < m) && v[i-1][j+1] == 1)
                {
                    count++;
                }
                if(j-1 >= 0 && v[i][j-1] == 1)
                {
                    count++;
                }
                if((j+1 < m) && v[i][j+1] == 1)
                {
                    count++;
                }
                if((i+1 < n  && j+1 < m) && v[i+1][j+1] == 1)
                {
                    count++;
                }
                if(i+1 < n  && v[i+1][j] == 1)
                {
                    count++;
                }
                if((i+1 < n && j-1 >= 0) && v[i+1][j-1] == 1)
                {
                    count++;
                }
                
                if(x == 1 && count < 2)
                {
                    board[i][j] = 0;
                }
                else if(x == 1 && (count >= 2 && count <= 3))
                {
                    continue;
                }
                else if(x == 1 && count > 3)
                {
                    board[i][j] = 0;
                }
                else if(x == 0 && count == 3)
                {
                    board[i][j] = 1;
                }
                
            }
        }
    
        
    }
};