class Solution {
public:
    int maxVowels(string s, int k) {
        
        int n = s.size();
        int i,j;
        i = 0;
        j = 0;
        int count = 0;
        int maxi = 0;
        while(j < n)
        {
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' )
            {
                count++;
            }
            if(j-i+1 < k)
            {
                j++;
                continue;
            }
            else if(j-i+1 == k)
            {
                maxi = max(count,maxi);
            }
            else
            {
                while(j-i+1 > k)
                {
                    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
                    {
                        count--;
                    }
                    i++;
                }
                 maxi = max(count,maxi);
            }
            j++;
        }
        return maxi;
    }
};