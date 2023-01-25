class Solution {
public:
    
    bool dfs(int x,int y,vector<vector<char>>&board,string word,int idx)
    {
        if(idx == word.size())
        {
            return  true;
        }
        if(x < 0 || y < 0 || x >= board.size() || y >= board[0].size() || board[x][y] != word[idx])
        {
            return false;
        }
        if(board[x][y] == word[idx])
        {
            char temp = board[x][y];
            board[x][y] = '#';
            if(dfs(x+1,y,board,word,idx+1)) return true;
            if(dfs(x-1,y,board,word,idx+1)) return true;
            if(dfs(x,y+1,board,word,idx+1)) return true;
            if(dfs(x,y-1,board,word,idx+1)) return true;
            
            board[x][y] = temp;
            return false;
        }
        
        return false;
    }
    
    
    
    
    bool exist(vector<vector<char>>& board, string word) {
    
        int i,j;
        int n = board.size();
        int m = board[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(board[i][j] == word[0])
                {
                   if(dfs(i,j,board,word,0))
                    {
                        return true;
                    } 
                }
                
            }
        }
        return false;
    }
};