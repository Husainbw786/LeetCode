class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        
        int i;
        int j;
        int n = words.size();
        vector<string>ans;
        for(i=0;i<n;i++)
        {
            
            for(j=0;j<n;j++)
            {
                if(words[i] != words[j] && words[j].find(words[i]) != -1)
                {
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};