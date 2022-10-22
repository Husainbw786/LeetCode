class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        
        map<int,int>mp;
        int n = items1.size();
        int i;
        for(i=0;i<n;i++)
        {
            int y = items1[i][1];
            mp[items1[i][0]] = y;
        }
        vector<vector<int>>ans;
        n = items2.size();
        for(i=0;i<n;i++)
        {
            if(mp.find(items2[i][0]) != mp.end())
            {
                items2[i][1] += mp[items2[i][0]];
                mp[items2[i][0]] = items2[i][1];
            }
            else
            {
                mp[items2[i][0]] = items2[i][1];
            }
        }
       
       for(auto x : mp)
       {
           ans.push_back({x.first,x.second});
       }
        return ans;
       
    }
};