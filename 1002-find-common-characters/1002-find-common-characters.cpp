class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
       vector<int>hash1(26,0);
       vector<int>hash2(26,0);
        int i;
        int n = words[0].size();
        string s = words[0];
        for(i=0;i<n;i++)
        {
            hash1[s[i] - 'a']++;
        }
        
        int m = words.size();
        for(i=1;i<m;i++)
        {
            string temp = words[i];
            for(int j=0;j<temp.size();j++)
            {
              hash2[temp[j] - 'a']++;
            }
            for(int k=0;k<26;k++)
            {
                hash1[k] = min(hash1[k],hash2[k]);
                hash2[k] = 0;
            } 
        }
        vector<string>ans;
        
        for(i=0;i<26;i++)
        {
            int count = hash1[i];
            while(count--)
            {
                char x = i + 'a';
                string s;
                s = x;
                ans.push_back(s);
            }
        }
        return ans;
        
    }
};