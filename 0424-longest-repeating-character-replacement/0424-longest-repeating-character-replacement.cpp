class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>count(26,0);
        int start = 0;
        int n = s.size();
        int MaxCount = 0;
        int result = 0;
        for(int i=0;i<n;i++)
        {
            count[s[i] - 'A']++;
            if(MaxCount < count[s[i] - 'A'])
            {
                MaxCount = count[s[i] - 'A'];
            }
            while(i-start-MaxCount+ 1 > k)
            {
                count[s[start] - 'A']--;
                start++;
                for(int i=0;i<26;i++)
                {
                    if(MaxCount < count[i])
                    {
                        MaxCount = count[i];
                    }
                }
            }
             result = max(result,i-start+1);
        }
       
        return result;
        
    }
};