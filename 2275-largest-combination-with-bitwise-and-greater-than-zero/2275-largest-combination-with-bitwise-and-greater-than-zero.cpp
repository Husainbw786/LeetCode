class Solution {
public:
    int largestCombination(vector<int>& candidates) {
                          
        unordered_map<int,int>mp;
        int i;
        int n = candidates.size();
        for(i=0;i<n;i++)
        {
            int x = candidates[i];
            int count = 0;
            while(x > 0)
            {
                if(x % 2 == 1)
                {
                    mp[count]++;
                }
                x = x/2;
                count++;
            }
        }
        int maxi = 0;
        for(auto it : mp)
        {
            if(it.second > maxi)
            {
                maxi = it.second;
            }
        }
        return maxi ;
    }
};