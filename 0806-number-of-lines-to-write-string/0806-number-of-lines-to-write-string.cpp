class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        
        int n = widths.size();
        int i;
        unordered_map<char,int>mp;
        for(i=0;i<26;i++)
        {
            mp[i] = widths[i];
        }
        int x = 0;
        int count = 0;
        vector<int>ans;
        for(i=0;i<s.size();i++)
        {
            if((x + mp[s[i] - 'a']) <= 100)
            {
                x = x + mp[s[i] - 'a']; 
            }
            else
            {
                x = 0;
                x += mp[s[i] - 'a'];
                count++;
            }
           
        }
        ans.push_back(count+1);
        ans.push_back(x);
        return ans;
    }
};