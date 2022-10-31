class Solution {
public:
    bool areNumbersAscending(string s) {
        
        int n = s.size();
        int i;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            int x = 0;
            if(isdigit(s[i]))
            {
                while(isdigit(s[i]))
                {
                    x = x*10 + (s[i] - '0');
                    i++;
                } 
                v.push_back(x);
            } 
        }
        for(i=1;i<v.size();i++)
        {
            if(v[i-1] >= v[i])
            {
                return false;
            }
        }
        return true;
    }
};