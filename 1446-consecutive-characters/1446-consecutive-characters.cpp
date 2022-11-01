class Solution {
public:
    int maxPower(string s) {
        
        int n = s.size();
        if(n == 1)
        {
            return 1;
        }
        int maxi = 0;
        int i;
        
        for(i=0;i<n-1;i++)
        {
            int count = 0;
            while(s[i] == s[i+1])
            {
                count++;
                i++;
            }
            maxi = max(count + 1,maxi);
        }
        return maxi;
    }
};