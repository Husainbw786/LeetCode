class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        
        int n = words.size();
        int i;
        int count = 0;
        for(i=0;i<n;i++)
        {
            string temp = words[i];
            bool flag = true;
            for(int j=0;j<temp.size();j++)
            {
                if(temp[j] == s[j])
                {
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                count++;
            }
        }
        return count;
    }
};