class Solution {
public:
    string toGoatLatin(string s) {
     
        string ans = "";
        vector<string>v;
        int n = s.size();
        string temp = "";
        int i;
        for(i=0;i<n;i++)
        {
            if(s[i] == ' ')
            {
               v.push_back(temp); 
                temp.clear();
            }
            else
            {
              temp += s[i];
            }
        }
        v.push_back(temp);
        n = v.size();
        for(i=0;i<n;i++)
        {
            string x = v[i];
            string y = "";
            if(x[0] == 'a' || x[0] == 'e' || x[0] == 'i' || x[0] == 'o' || x[0] == 'u' || x[0] == 'A' || x[0] == 'E' || x[0] == 'O' || x[0] == 'I' || x[0] == 'U')
            {
                for(int j=0;j<x.size();j++)
                {
                    y += x[j];
                }
                y += "ma";
                int count = i+1;
                while(count--)
                {
                    y += 'a';
                }
            }
            else
            {
              for(int j=1;j<x.size();j++)
                {
                    y += x[j];
                }
                y += x[0];
                y += "ma";
                int count = i+1;
                while(count--)
                {
                    y += 'a';
                }
                
            }
          ans += y;
          ans += ' ';  
        }
        ans.pop_back();
        return ans;
    }
};