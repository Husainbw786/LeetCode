class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        int n = arr.size();
        set<int>st;
        int i;
        for(i=0;i<n;i++)
        {
            st.insert(arr[i]);
        }
        unordered_map<int,int>mp;
        int count = 1;
        for(auto x : st)
        {
            mp[x] = count;
            count++;
        }
        vector<int>v;
        for(i=0;i<n;i++)
        {
            v.push_back(mp[arr[i]]);
        }
        return v;
    }
};