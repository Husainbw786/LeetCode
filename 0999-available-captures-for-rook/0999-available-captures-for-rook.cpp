class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
     
        int n = board.size();
        int m = board[0].size();
        int i,j;
        int x,y;
        
        int count = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
               if(board[i][j] == 'R')
               {
                   int p = i;
                   int q = j;
                   x = i;
                   y = j;
                   while(x < n)
                   {
                       if(board[x][j] == 'B')
                       {
                           break;
                       }
                       if(board[x][j] == 'p')
                       {
                           count++;
                           break;
                       }
                       x++;
                   }
                   while(p >= 0)
                   {
                       if(board[p][j] == 'B')
                       {
                           break;
                       }
                       if(board[p][j] == 'p')
                       {
                           count++;
                           break;
                       }
                       p--;
                   }
                   while(y < m)
                   {
                       if(board[i][y] == 'B')
                       {
                           break;
                       }
                       if(board[i][y] == 'p')
                       {
                           count++;
                           break;
                       }
                       y++;
                   }
                   while(q >= 0)
                   {
                       if(board[i][q] == 'B')
                       {
                           break;
                       }
                       if(board[i][q] == 'p')
                       {
                           count++;
                           break;
                       }
                       q--;
                   }
                   break;
               }
            }
        }
        return count;
    }
};