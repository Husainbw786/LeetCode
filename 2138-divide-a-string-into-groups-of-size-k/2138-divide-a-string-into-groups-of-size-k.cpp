class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        vector<string>v;
        int n = s.size();
        int m = s.size();
        int i = 0;
        while(n > 0)
        {
            string temp = "";
            if( n >= k)
            {
                n -= k;
                int x = k;
                while(x--)
                {
                    temp += s[i];
                    i++;
                   
                }
            }
            else
            {
                break;
            }
            
            v.push_back(temp);
        }
        string temp2 = "";
        int count = 0;
        if(i < m)
        {
            while(i < m)
            {
                count++;
                temp2 += s[i];
                i++;
            }
            int x = k - count;
            while(x--)
            {
                temp2 += fill;
            }
           v.push_back(temp2);
        }
        
        return v;
    }
};