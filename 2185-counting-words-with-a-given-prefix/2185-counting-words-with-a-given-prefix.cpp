class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int count =  0;
        int i;
        int n = words.size();
        int m = pref.size();
        for(i=0;i<n;i++)
        {
            string temp = words[i];
            bool flag = true;
            for(int j=0;j<pref.size();j++)
            {
                if(temp[j] == pref[j])
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