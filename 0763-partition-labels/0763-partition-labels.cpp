class Solution {
public:
    vector<int> partitionLabels(string s) {
            int n = s.size();
            int i;
           unordered_map<char,int>mp;
        for(i=0;i<n;i++)
        {
            mp[s[i]] = i;
        }
        int maxi = INT_MIN;
        vector<int>ans;
        int prev = -1;
        for(i=0;i<n;i++)
        {
            maxi = max(maxi,mp[s[i]]);
            if(maxi == i)
            {
                int x = maxi - prev;
                ans.push_back(x);
                prev = maxi;
            }
        }
        return ans;
    }
};