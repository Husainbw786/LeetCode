class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
     
        map<vector<int>,int>mp;
        int i,j;
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for(i=0;i<n;i++)
        {
            mp[grid[i]]++;
        }
        int k = 0;
        for(i=0;i<m;i++)
        {
            vector<int>temp;
            for(j=0;j<n;j++)
            {
                temp.push_back(grid[j][i]);
            }
            count += mp[temp];
        }
        return count;
        
    }
};