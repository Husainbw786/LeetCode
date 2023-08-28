class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        
        int i = 1;
        vector<int>v;
        unordered_map<int,int>mp;
        
        while(v.size() != n)
        {
            if(mp.find(target-i) != mp.end())
            {
                i++;
                continue; 
            }
            v.push_back(i);
            mp[i]++;
            i++;
        }
        long long int sum = 0;
        for(i=0;i<n;i++)
        {
            sum += v[i];
            //cout << v[i] << " ";
        }
        return sum;
    }
};