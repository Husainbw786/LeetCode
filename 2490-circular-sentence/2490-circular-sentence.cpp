class Solution {
public:
    bool isCircularSentence(string sentence) {
        
        vector<string>v;
        int i;
        int n = sentence.size();
        string temp = "";
        for(i=0;i<n;i++)
        {
            if(sentence[i] != ' ')
            {
                temp += sentence[i];
            }
            else
            {
                v.push_back(temp);
                temp = "";
            }
        }
        v.push_back(temp);
        for(i=0;i<v.size()-1;i++)
        {
            string s1 = v[i];
            string s2 = v[i+1];
            int len1 = s1.size();
            if(s1[len1-1] != s2[0])
            {
                return false;
            }
        }
        string t1 = v[0];
        string t2 = v[v.size() - 1];
        int len = t2.size();
        if(t1[0] != t2[len-1])
        {
            return false;
        }
        return true;
    }
};