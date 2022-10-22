class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        
       unordered_map<string,int>mp;
        int i;
        int n = paths.size();
        for(i=0;i<n;i++)
        {
            mp[paths[i][0]]++;
            mp[paths[i][1]]++;
        }
        for(i=0;i<n;i++)
        {
            if(mp[paths[i][1]] == 1)
            {
                return paths[i][1];
            }
        }
        return paths[0][1];
    }
};