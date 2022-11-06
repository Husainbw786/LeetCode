class Solution {
public:
    string reorderSpaces(string s) {
        
        int n = s.size();
        int space = 0;
        int i;
        for(i=0;i<n;i++)
        {
            if(s[i] == ' ')
            {
                space++;
            }
        }
         string temp = "";
        vector<string>v;
        for(i=0;i<n;i++)
        {
            if(s[i] != ' ')
            {
                while(i < n && s[i] != ' ')
                {
                    temp += s[i];
                    i++;
                }
                v.push_back(temp);
                temp = "";
            }
        }
        if(temp.size() != 0)
        {
            v.push_back(temp);
        }
        string ans = "";
        if( v. size() == 1)
        {
           ans += v[0];
           while(space--)
           {
               ans += ' ';
           }
           return ans;
        }
        int words = v.size() - 1;
        int x = space / words;
        int extra = space % words;
        

        for(i=0;i<words + 1;i++)
        {
            ans += v[i];
            int k = x;
            while(k--)
            {
                if(i != words )
                {
                 ans += ' ';
                }
               
            }
        }
        while(extra--)
        {
            ans += ' ';
        }
        return ans;

    }
};