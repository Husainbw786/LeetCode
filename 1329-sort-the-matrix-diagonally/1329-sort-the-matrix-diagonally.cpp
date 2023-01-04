class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        int i,j;
        unordered_map<int,priority_queue<int,vector<int>,greater<int>>>mp;
        vector<vector<int>>store;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                mp[i-j].push(mat[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                mat[i][j] = mp[i-j].top();
                mp[i-j].pop();
            }
        }
        return mat;
    }
};