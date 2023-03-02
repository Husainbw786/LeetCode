class Solution {
public:
    int compress(vector<char>& chars) {
        
       int n = chars.size();
       vector<char>ans;
       int i;
        int count = 1;
        if(n == 1)
        {
            return 1;
        }
        for(i=0;i<n-1;i++)
        {
            while(i<n-1 && chars[i] == chars[i+1])
            {
                count++;
                i++;
            }
            ans.push_back(chars[i]);
            if(count != 1)
            {
                string x = to_string(count);
                for(int j = 0;j<x.size();j++)
                {
                    ans.push_back(x[j]);
                }
            }
            count = 1;
        }
        if(chars[n-1] != chars[n-2])
        {
            ans.push_back(chars[n-1]);
        }
        for(i=0;i<ans.size();i++)
        {
            chars[i] = ans[i];
        }
        return ans.size();
        
        
    }
};