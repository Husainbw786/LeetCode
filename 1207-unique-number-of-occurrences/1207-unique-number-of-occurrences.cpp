class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     
        unordered_map<int,int>mp;
        int n = arr.size();
        int i;
        for(i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        vector<int>v;
        for(auto x : mp)
        {
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size()-1;i++)
        {
            if(v[i] == v[i+1])
            {
                return false;
            }
        }
        return true;
    }
};