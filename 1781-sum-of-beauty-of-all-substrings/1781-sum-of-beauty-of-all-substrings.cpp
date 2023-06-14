class Solution {
public:
    int beautySum(string s) {
     
        int n = s.size();
        int i;
        int sum = 0;
        vector<vector<int>>a;
        for(i=0;i<n;i++)
        {
            vector<int>mp(26,0);
            for(int j=i;j<n;j++)
            {
                mp[s[j]-'a']++;
                a.push_back(mp);
            }
        }
        
        for(i=0;i<a.size();i++)
        {
            int maxi = INT_MIN;
            int mini = INT_MAX;
            for(auto x : a[i])
            {
                if(x != 0)
                {
                    maxi = max(maxi,x);
                    mini = min(mini,x);
                }
            }
            sum += maxi - mini;
        }
     return sum;
    }
};