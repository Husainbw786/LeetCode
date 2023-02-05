class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        
        unordered_map<int,int>mp;
        int len = banned.size();
        int i;
        for(i=0;i<len;i++)
        {
            mp[banned[i]]++;
        }
        int sum = 0;
        int count = 0;
        for(i=1;i<=n;i++)
        {
            if(mp.find(i) == mp.end())
            {
                if(sum + i <= maxSum)
                {
                    sum += i;
                    count++; 
                }
                else
                {
                    break;
                }
            }
        }
        return count;
    }
};