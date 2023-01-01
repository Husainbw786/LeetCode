class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        
        int n = dominoes.size();
        int count = 0;
        int i;
        map<vector<int>, int> mp;
        for(i=0;i<n;i++)
        {
           vector<int>temp = dominoes[i];
           sort(temp.begin(),temp.end());
            mp[temp]++;   
        }
        for(auto x : mp)
        {
            if(x.second >= 2)
            {
                count += (x.second * (x.second - 1))/2;
            }
        }
        return count;
    }
};