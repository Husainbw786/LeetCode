class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
     
        long long int zero_count = 0;
        int n = time.size();
        unordered_map<int,int>mp;
        int i;
        long long int ans = 0;
        for(i=0;i<n;i++)
        {
            if(time[i] % 60 == 0)
            {
                zero_count++;
            }
             time[i] = time[i] % 60;
        }
       for(i=0;i<n;i++)
       {
           if(mp.find(60 - time[i]) != mp.end())
           {
               ans += mp[60-time[i]];
           }
           mp[time[i]]++;
       }
        ans += (zero_count * (zero_count - 1))/2;
        
        return ans;
    }
};