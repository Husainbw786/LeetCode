class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int n = stones.size();
        int i;
        unordered_map<char,int>mp;
        int ans = 0;
        for(i=0;i<n;i++)
        {
            mp[stones[i]]++;
        }
        n = jewels.size();
        for(i=0;i<n;i++)
        {
            if(mp.find(jewels[i]) != mp.end())
            {
                ans += mp[jewels[i]];
            }    
        }
        return ans;
    }
};