class Solution {
public:
    string largestGoodInteger(string s) {
        
        int n = s.size();
        int i;
        string temp ="";
        int count = 0;
        vector<string>v;
        for(i=0;i<n-2;i++)
        {
            string temp;
            if(s[i] == s[i+1]  && s[i+1] == s[i+2] )
            {
                temp += s[i];
                temp += s[i+1];
                temp += s[i+2];
                v.push_back(temp);
                temp = "";
            }
        }
        sort(v.begin(),v.end());
        n = v.size();
        if(v.size() == 0)
        {
            return "";
        }
        return v[n-1];
    }
};