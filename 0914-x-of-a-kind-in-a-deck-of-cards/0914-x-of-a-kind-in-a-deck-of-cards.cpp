class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        
        int i;
        int n = deck.size();
        unordered_map<int,int>mp;
        for(i=0;i<n;i++)
        {
            mp[deck[i]]++;
        }
        int min = INT_MAX;
        vector<int>v;
        for(auto x : mp)
        {
            if(x.second > 1)
            {
               v.push_back(x.second); 
            }
            else
            {
                return false;
            }
            if(min > x.second)
            {
                min = x.second;
            }
            
        }
        while(min >= 2)
        {
            bool flag = true;
            for(auto x : mp)
            {
                if(x.second % min != 0)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                return true;
            }
            min--;
        }
        return false;
    }
};