class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        int n = arr.size();
        int i;
        unordered_map<int,int>mp;
        for(i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int per = n / 4;
        for(auto x : mp)
        {
            if(x.second > per)
            {
                return x.first;
            }
        }
        return 0;
    }
};