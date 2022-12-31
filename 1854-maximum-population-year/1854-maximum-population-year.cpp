class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        
        int n =  logs.size();
        int i;
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            int x = logs[i][0];
            int y = logs[i][1];
            for(int j=x;j<y;j++)
            {
                mp[j]++;
            }
        }
        int maxi = INT_MIN;
        int ans = 0;
        for(auto x : mp)
        {
            if(x.second > maxi)
            {
                maxi = x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};