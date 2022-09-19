class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int i;
        int j;
        int n = sentences.size();
        int max = INT_MIN;
        
        for(i=0;i<n;i++)
        {
            string s = sentences[i];
            int count = 0;
            for(j=0;j<s.size();j++)
            {
                if(s[j] == ' ')
                {
                    count++;
                }
            }
            if(max < count)
            {
                max = count;
            }
        }
        return max+1;
    }
};