class Solution {
public:
    int numberOfSubstrings(string s) {
        
        int n = s.size();
        string temp = "";
        int i=0;
        int a_index = -1;
        int b_index = -1;
        int c_index = -1;
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(s[i] == 'a')
            {
                a_index = i;
            }
            if(s[i] == 'b')
            {
                b_index = i;
            }
            if(s[i] == 'c')
            {
                c_index = i;
            }
            if(i > 1)
            {
                count += min({a_index,b_index,c_index}) + 1;
            }
        }
        return count;
    }
};