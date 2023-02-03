class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows == 1)
        {
            return s;
        }
        int n = s.size();
        vector<string>v(numRows,"");
        int i;
        int curr_row = 0;
        bool flag = false;
        for(i=0;i<n;i++)
        {
            v[curr_row].push_back(s[i]);
            if(curr_row == 0 || curr_row == numRows-1)
            {
                flag = !flag;
            }
            if(flag)
            {
                curr_row++;
            }
            else
            {
                curr_row--;
            }
        }
        string ans = "";
        for(i=0;i<v.size();i++)
        {
            string x = v[i];
            ans += x;
        }
        return ans;
    }
};