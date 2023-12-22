class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        
      
        
        
        vector<vector<int>>v = mat;
        int n = mat.size();
        int i,j;
        int m = mat[0].size();
        if(k > m)
        {
            k = k % m;
        }
        for(i=0;i<n;i++)
        {
            if(i % 2 == 0)
            {
                reverse(mat[i].begin(),mat[i].end());
                reverse(mat[i].begin(),mat[i].end()-k);
                reverse(mat[i].end()-k,mat[i].end());
            }
            else
            {
                reverse(mat[i].begin(),mat[i].end());
                reverse(mat[i].begin(),mat[i].begin()+k);
                reverse(mat[i].begin()+k,mat[i].end());
            }
                
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(mat[i][j] != v[i][j])
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};