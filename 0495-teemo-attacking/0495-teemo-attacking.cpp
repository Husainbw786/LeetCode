class Solution {
public:
    int findPoisonedDuration(vector<int>& time, int d) {
        
        int n = time.size();
        int i;
        int ans = 0;
        for(i=1;i<n;i++)
        {
            if(time[i] - time[i-1] < d)
            {
                ans += time[i] - time[i-1];
            }
            else
            {
                ans += d;
            }
            
        }
        
        return ans+d;
    }
};

  