class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int i;
        int n = haystack.size();
        int m = needle.size();
        int ans = -1;
        for(i=0;i<n;i++)
        {
            int x = 0;
            int k = i;
            if(haystack[k] == needle[0])
            {
                int store = i;
                while(x < m && k < n &&  haystack[k] == needle[x])
                {
                    k++;
                    x++;
                }
                if(x == needle.size())
                {
                    ans = store;
                    break;
                }
            }
        }
        return ans;
    }
};