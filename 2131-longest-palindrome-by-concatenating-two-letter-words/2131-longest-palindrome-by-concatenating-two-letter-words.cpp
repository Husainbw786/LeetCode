class Solution {
public:
    int longestPalindrome(vector<string>& words) {
     
        int ans = 0;
        unordered_map<string,int>mp;
        int n = words.size();
        for(int i=0;i<n;i++)
        {
            reverse(words[i].begin(),words[i].end());
            if(mp.count(words[i]))
            {
                ans += 4;
                mp[words[i]]--;
                if(mp[words[i]] == 0)
                {
                    mp.erase(words[i]);
                }
            }
            else
            {
                reverse(words[i].begin(),words[i].end());
                mp[words[i]]++;
            }
        }
        for(auto x : mp)
        {
            if(x.first[0] == x.first[1])
            {
                ans +=2;
                break;
            }
        }
        return ans;
    }
};