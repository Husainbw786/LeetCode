class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        
        unordered_map<string,int>mp;
        int i;
        int n = words.size();
        for(i=0;i<n;i++)
        {
            mp[words[i]]++;
        }
        int ans = 0;
        for(i=0;i<n;i++)
        {
            string temp = words[i];
            string temp2 = words[i];
            reverse(temp2.begin(),temp2.end());
            if(temp == temp2)
            {
                if(mp[temp] > 1)
                {
                    ans++;
                    mp[temp] -= 2;
                }
                if(mp[temp] <= 1 )
                {
                    mp.erase(temp);
                }
                continue;
            }
            if(mp.find(temp2) != mp.end())
            {
              
                ans++;
                mp[temp]--;
                mp[temp2]--;
                if(mp[temp] == 0)
                {
                    mp.erase(temp);
                }
                if(mp[temp2] == 0)
                {
                    mp.erase(temp2);
                }
            }
        }
        return ans;
    }
};