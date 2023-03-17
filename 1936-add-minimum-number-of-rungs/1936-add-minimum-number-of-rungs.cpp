class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        
        int ans = 0;
        int start = 0;
        int n = rungs.size();
        if((rungs[0] - start)  > dist)
        {
            int x = rungs[0] - start;
            if(x % dist == 0)
            {
                ans--;
            }
            x = x / dist;
            ans += x;
        }
        int i;
        for(i=0;i<n-1;i++)
        {
            if((rungs[i+1] - rungs[i]) > dist)
            {
                int diff = rungs[i+1] - rungs[i];
                if(diff % dist == 0)
                {
                    ans--;
                }
                diff = diff/ dist;
                ans += diff;
            }
        }
        
        return ans;
    }
};