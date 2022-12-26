class Solution {
public:
    int similarPairs(vector<string>& words) {
     
        map<set<char>,int>mp;
        int i;
        int n = words.size();
        for(i=0;i<n;i++)
        {
            set<char>st;
            string x = words[i];
            for(int j=0;j<x.size();j++)
            {
                st.insert(x[j]);
            }
            mp[st]++;
        }
        int count = 0;
        for(auto x : mp)
        {
            count += ( (x.second)*(x.second - 1) ) / 2;
        }
        return count;
    }
};