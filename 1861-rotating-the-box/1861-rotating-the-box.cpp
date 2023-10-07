class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
      
        int n = box.size();
        int m = box[0].size();  
        int x = m-1;
        int y = 0;
        
        vector<vector<char>>v(m,vector<char>(n,'.'));
        int i,j;
        int count = 0;
        for(i=n-1;i>=0;i--)
        {
            int x = m-1;
            int y = count;
           // cout << x << " " << y << endl; 
            count++;
            for(j=m-1;j>=0;j--)
            {
                if(box[i][j] == '.')
                {
                    continue;
                }
                else if(box[i][j] == '*')
                {
                    x = j;
                    v[x][y] = '*';
                    x--;
                }
                else
                {
                    v[x][y] = '#';
                    x--;
                }
            }
        }
        
        return v;
    }
};