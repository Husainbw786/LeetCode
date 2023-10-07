class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        
        int count_upper = 0;
        int i;
        for(i=0;i<pattern.size();i++)
        {
            if(pattern[i] >= 'A' && pattern[i] <= 'Z')
            {
                count_upper++;
            }
        }
        vector<bool>ans;
        int n = queries.size();
        for(i=0;i<n;i++)
        {
            int count = 0;
            string s = queries[i];
            int x = 0;
            bool flag = false;
            for(int j=0;j<s.size();j++)
            {
                if(x < pattern.size() && s[j] == pattern[x])
                {
                    x++;
                }
                if(s[j] >= 'A' && s[j] <= 'Z')
                {
                    count++;
                }
                if(count > count_upper)
                {
                    flag = true;
                    break;
                }
            }
            if(x == pattern.size() && !flag)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
           
        }
        
        return ans;
    }
};