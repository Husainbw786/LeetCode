class Solution {
public:
    
    int count_space(string st)
    {
        int i;
        int count = 0;
        for(i=0;i<st.length();i++)
        {
            if(st[i] == ' ')
            {
                count++;
            }
        }
        return count;
    }
        
    int mostWordsFound(vector<string>& sentences) {
        
        int i;
        int j;
        int n = sentences.size();
        int max = INT_MIN;
        
        for(i=0;i<n;i++)
        {
            string s = sentences[i];
            int ans = count_space(s);
           
            if(max < ans)
            {
                max = ans;
            }
        }
        return max+1;
    }
};