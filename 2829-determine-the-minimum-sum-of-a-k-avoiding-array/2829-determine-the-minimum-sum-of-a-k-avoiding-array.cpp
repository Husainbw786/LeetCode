class Solution {
public:
    int minimumSum(int n, int k) {
        
        unordered_map<int,int>mp;
        int i=1;
        int x = k;
        vector<int>v;
        while(true)
        {
            int find = x-i;
            if(mp.find(find) == mp.end())
            {
                v.push_back(i);
                mp[i]++;
                i++;
            }
            else
            {
                i++;
            }
            if(v.size() == n)
            {
                break;
            }
        }
        
        int sum = 0;
        for(i=0;i<n;i++)
        {
            sum += v[i];
        }
        return sum;
    }
};