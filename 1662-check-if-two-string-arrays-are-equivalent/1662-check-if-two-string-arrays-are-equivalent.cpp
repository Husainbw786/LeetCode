class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       
        string s1 = "";
        string s2 = "";
        int n = word1.size();
        for(int i=0;i<n;i++)
        {
            s1 += word1[i];
        }
        n = word2.size();
        for(int i=0;i<n;i++)
        {
            s2 += word2[i];
        }
        if(s1 == s2)
        {
            return true;
        }
        return false;
    }
};