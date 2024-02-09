class Solution {
public:
    int minimumPushes(string word) {
        
        
        int n = word.size();
        int i;
        int ans = 0;
        for(i=0;i<n;i++)
        {
            if(i < 8)
            {
                ans += 1;
            }
            else if(i < 16)
            {
                ans += 2;
            }
            else if(i < 24)
            {
                ans += 3;
            }
            else
            {
                ans += 4;
            }
        }
        return ans;
    }
};