class Solution {
public:
    string generateTheString(int n) {
          
        string ans = "";
        int i;
        if(n % 2 == 0)
        {
            for(i=0;i<n-1;i++)
            {
                ans += 'a';
            }
            ans += 'b';
        }
        else
        {
            for(i=0;i<n;i++)
            {
                ans += 'a';
            }
        }
        return ans;
    }
};