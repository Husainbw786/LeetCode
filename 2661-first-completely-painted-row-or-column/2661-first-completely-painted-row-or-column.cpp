class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        unordered_map<int,pair<int,int>>mp;
        vector<int>row(n,0);
        vector<int>col(m,0);
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                mp[mat[i][j]] = {i,j};
            }
        }
        
       
        for(i=0;i<m*n;i++)
        {
            int x = mp[arr[i]].first;
            int y = mp[arr[i]].second;
            row[x]++;
            col[y]++;
            if(row[x] == m)
            {
                return i;
            }
            if(col[y] == n)
            {
                return i;
            }
        }
        return 0;
        
    }
};