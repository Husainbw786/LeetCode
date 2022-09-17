class Solution {
public:
    int count = 1;
    vector<string>ans;
    
    void helper(char x, int index)
    {
        int i = 0;
        while(i<count)
        {
            string s1 = ans[i];
            s1[index] = x;
            ans.push_back(s1);
            i++;
        }
        count += count;
    }
    
    vector<string> letterCasePermutation(string s) {
         transform(s.begin(), s.end(), s.begin(), ::tolower);
        ans.push_back(s);
        int i;
        for(i=0;i<s.size();i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                helper(toupper(s[i]),i);
            }
        }
        return ans;
    }
};