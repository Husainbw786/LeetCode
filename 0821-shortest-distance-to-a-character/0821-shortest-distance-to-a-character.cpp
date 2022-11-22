class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        int n = s.size();
        vector<int>dis;
        int i;
        for(i=0;i<n;i++)
        {
            if(s[i] == c)
            {
                dis.push_back(i);
            }
        }
        vector<int>ans(n,0);
        for(i=0;i<n;i++)
        {
            int mini = INT_MAX;
            for(int j=0;j<dis.size();j++)
            {
                int x = abs(dis[j] - i);
                mini = min(x,mini);
            }
            ans[i] = mini;
        }
        return ans;
    }
};