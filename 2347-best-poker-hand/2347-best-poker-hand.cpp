class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        
        int n = suits.size();
        int i;
        bool flag = false;
        for(i=0;i<n-1;i++)
        {
            if(suits[i] != suits[i+1])
            {
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            return "Flush";
        }
        unordered_map<int,int>mp;
        int count = 0;
        for(i=0;i<n;i++)
        {
            mp[ranks[i]]++;
        }
        for(auto x : mp)
        {
            if(x.second >= 3)
            {
                return "Three of a Kind";
            }
        }
        for(auto x : mp)
        {
            if(x.second == 2)
            {
                return "Pair";
            }
        }
        
        return "High Card";
    }
};