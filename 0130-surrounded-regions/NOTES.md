for(int i=0; i<board.length; i++) {
for(int j=0; j<board[i].length; j++) {
if((i==0 || j==0 || i==board.length-1 || j==board[i].length-1) && board[i][j] == 'O') {
traverseBoard(board, visited, i, j);
}
}
}
for(int i=0; i<board.length; i++){
for(int j=0; j<board[i].length; j++){
if(board[i][j] == 'O' && !visited[i][j]){
board[i][j] = 'X';
}
}
}
}
​
void traverseBoard(char[][] board, boolean[][] visited, int r, int c){
if(r<0 || c<0 || r==board.length || c==board[0].length || visited[r][c] || board[r][c] == 'X'){
return;
}
visited[r][c] = true;
traverseBoard(board, visited, r-1, c);
traverseBoard(board, visited, r, c+1);
traverseBoard(board, visited, r+1, c);
traverseBoard(board, visited, r, c-1);
}