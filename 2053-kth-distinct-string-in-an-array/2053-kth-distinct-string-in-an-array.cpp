class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        unordered_map<string,int>mp;
        int i;
        int n = arr.size();
        for(i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        string ans = "";
        int x = 0;
        vector<string>v;
        for(i=0;i<n;i++)
        {
            if(mp[arr[i]] == 1)
            {
               v.push_back(arr[i]);
            }
        }
        for(i=0;i<v.size();i++)
        {
            x++;
            if(k == x)
            {
                ans = v[i];
            }
        }
        return ans;
    }
};