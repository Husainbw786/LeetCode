class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        set<string>st;
        int i,j;
        int n = board.size();
        int m = board[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(board[i][j] != '.')
                {
                   int num = board[i][j] - '0';
                    string s1 = "row"+ to_string(i) + to_string(num);
                    string s2 = "col"+ to_string(j) + to_string(num);
                    string s3 = "box"+ to_string(i/3*3+j/3) + to_string(num);
                  if(st.find(s1) != st.end() || st.find(s2) != st.end() || st.find(s3) != st.end() )
                  {
                      return false;
                  }
                    st.insert(s1);
                    st.insert(s2);
                    st.insert(s3);
                }
            }
        }
        return true;
    }
};