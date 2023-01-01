class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        
        int m = logs.size();
        int i;
        int maxi = logs[0][1];
        int ans = logs[0][0];
        int prev;
        for(i=1;i<m;i++)
        {
            int time = logs[i][1] - logs[i-1][1];
            if(maxi < time)
            {
                maxi = time;
                ans = logs[i][0];       
            }
        }
        vector<pair<int,int>>v;
        if(logs[0][1] == maxi)
        {
            v.push_back({logs[0][0],maxi});
        }
        for(i=1;i<m;i++)
        {
            if(logs[i][1] - logs[i-1][1] == maxi)
            {
                v.push_back({logs[i][0],maxi});
            }
        }
        sort(v.begin(),v.end());
        return v[0].first;
    }
};