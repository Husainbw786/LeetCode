class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int count =  0;
        int i;
        int n = words.size();
        int m = pref.size();
        for(i=0;i<n;i++)
        {
            if(words[i].substr(0,m) == pref.substr(0,m))
            {
                count++;
            }
        }
        return count;
    }
};