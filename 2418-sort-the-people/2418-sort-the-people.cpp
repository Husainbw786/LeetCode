class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        vector<pair<int,string>>v;
        int i;
        int n = names.size();
        for(i=0;i<n;i++)
        {
            v.push_back({heights[i],names[i]});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        vector<string>ans;
        for(i=0;i<n;i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};