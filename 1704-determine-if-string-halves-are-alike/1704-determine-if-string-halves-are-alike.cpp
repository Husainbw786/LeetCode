class Solution {
public:
    bool halvesAreAlike(string s) {
     
        int n = s.size();
        string a = "";
        string b = "";
        int i;
        int count1 = 0;
        int count2 = 0;
        for(i=0;i<n/2;i++)
        {
            a += s[i];
        }
        for(i=n-1; i>= n/2; i--)
        {
            b += s[i];
        }
        n = a.size();
        for(i=0;i<n;i++)
        {
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            {
                count1++;
            }
        }
        for(i=0;i<n;i++)
        {
            if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u' || b[i] == 'A' || b[i] == 'E' || b[i] == 'I' || b[i] == 'O' || b[i] == 'U')
            {
                count2++;
            }
        }
        if(count1 == count2)
        {
            return true;
        }
        return false;
    }
};