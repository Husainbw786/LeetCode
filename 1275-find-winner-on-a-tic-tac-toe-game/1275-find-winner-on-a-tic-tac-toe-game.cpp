class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>>grid(3,vector<char>(3));
        char val = 'x';
        int i;
        for(i=0;i<moves.size();i++)
        {
            if(i % 2 == 0)
            {
                grid[moves[i][0]][moves[i][1]] = val;
            }
            else
            {
                grid[moves[i][0]][moves[i][1]] = 'o';
            }
        }
        for(i=0;i<3;i++)
        {
            if(grid[i][0] == 'x' && grid[i][1] == 'x' && grid[i][2] == 'x' )
            {
                return "A";
            }
            if(grid[i][0] == 'o' && grid[i][1] == 'o' && grid[i][2] == 'o' )
            {
                return "B";
            }
            if(grid[0][i] == 'x' && grid[1][i] == 'x' && grid[2][i] == 'x' )
            {
                return "A";
            }
            if(grid[0][i] == 'o' && grid[1][i] == 'o' && grid[2][i] == 'o' )
            {
                return "B";
            }
            
        }
            if(grid[0][0] == 'o' && grid[1][1] == 'o' && grid[2][2] == 'o' )
            {
                return "B";
            }
            if(grid[0][0] == 'x' && grid[1][1] == 'x' && grid[2][2] == 'x' )
            {
                return "A";
            }
            if(grid[0][2] == 'o' && grid[1][1] == 'o' && grid[2][0] == 'o' )
            {
                return "B";
            }
            if(grid[0][2] == 'x' && grid[1][1] == 'x' && grid[2][0] == 'x' )
            {
                return "A";
            }
        if(moves.size() == 9)
        {
            return "Draw";
        }
        return "Pending";
    }
};