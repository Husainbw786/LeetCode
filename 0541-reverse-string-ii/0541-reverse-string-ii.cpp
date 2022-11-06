class Solution {
public:
    string reverseStr(string s, int k) {
       int n = s.size();
       int i;
       string ans = "";
       for(i=0;i<n;)
       {
           int x = k;
           string temp = "";
           while(x--)
           {
               if(i < n)
               {
                 temp += s[i];
                 i++;
               }
               
           }
           reverse(temp.begin(),temp.end());
           ans += temp;
           int y = k;
           while(y--)
           {
               if(i < n)
               {
               ans += s[i];
               i++;
               }
           }
       }
        return ans;
    }
};