class Solution {
public:
    string replaceDigits(string s) {
        
      
        int i;
        int n = s.size();
        for(i=1;i<n;i+=2)
        {   
              s[i] = s[i] + (s[i-1]) - '0';
        }
        return s;
    }
};