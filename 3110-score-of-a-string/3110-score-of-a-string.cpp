class Solution {
public:
    int scoreOfString(string s) {
        
        int n = s.size();
        int i;
        int sum = 0;
        for(i=0;i<n-1;i++)
        {
            sum += abs(s[i] - s[i+1]);
        }
        return sum;
    }
};