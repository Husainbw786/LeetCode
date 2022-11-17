class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        int n = colors.size();
        int i = 0;
        int ans = 0;
        while(i<n)
        {
            char ch = colors[i];
            int sum = 0;
            int mx = 0;
            while(i<n && colors[i] == ch)
            {
                sum += neededTime[i];
                mx = max(neededTime[i],mx);
                i++;
            }
           ans += sum - mx; 
        }
        return ans;
    }
};