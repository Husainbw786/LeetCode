class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        int p=0,q=0;
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i] == '#')
            {
                p--;
                p = max(0,p);
            }
            else
            {
                 s[p] = s[i];
                p++;
            }
        }
        for(i=0;i<t.size();i++)
        {
            if(t[i] == '#')
            {
                q--;
                q = max(0,q);
            }
            else
            {
                 t[q] = t[i];
                 q++;
            }
        }
        if(p != q)
        {
            return false;
        }
         for(i=0;i<p;i++)
            {
                if(s[i]!=t[i])
                 return false;
            }
        return true;
        
    }
};