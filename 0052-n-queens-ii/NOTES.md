}
int placeQueens(vector<string>& board, int row)
{
//base case
if(row == board.size()) //this means we hae successfully filled the n*n board with n Queens
return 1;              //such that none of the Queens attack each other
​
int count = 0;
for(int col=0; col < board.size(); col++)
{
if(isSafePosition(board,row,col))
{
board[row][col] = 'Q'; //place the Queen
count += placeQueens(board,row+1);
board[row][col] = '.'; //backtrack, and explore other possibilities
}
}
return count;
}
​
public:
int totalNQueens(int n) {
vector<string> board(n,string(n,'.'));
return placeQueens(board,0);
}
};