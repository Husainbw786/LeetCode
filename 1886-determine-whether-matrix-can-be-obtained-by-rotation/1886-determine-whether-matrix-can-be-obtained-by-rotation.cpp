class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        int i,j;
        int n = mat.size();
        int m = mat[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
               swap(mat[i][j],mat[j][i]);
            }
        }
        
        for(i=0;i<n;i++)
        {
            reverse(mat[i].begin(),mat[i].end());
            
        }
        if(mat == target)
        {
            return true;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
               swap(mat[i][j],mat[j][i]);
            }
        }
        for(i=0;i<n;i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
        if(mat == target)
        {
            return true;
        }
       
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
               swap(mat[i][j],mat[j][i]);
            }
        }
        for(i=0;i<n;i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
        if(mat == target)
        {
            return true;
        }
         for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
               swap(mat[i][j],mat[j][i]);
            }
        }
        
        for(i=0;i<n;i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
        if(mat == target)
        {
            return true;
        }
        return false;
    }
};