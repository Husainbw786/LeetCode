class Solution {
public:
    int findLucky(vector<int>& arr) {
     
        map<int,int>mp;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int ans = -1;
        for(auto x : mp)
        {
            if(x.first == x.second)
            {
                ans = x.first;
            }
        }
        return ans;
    }
};