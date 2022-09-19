class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int i = 0;
        int j = 0;
        string ans =  "";
        int count1 = word1.size();
        int count2 = word2.size();
        while(i < word1.size() && j < word2.size())
        {
            ans += word1[i];
            i++;
            count1--;
            ans += word2[j];
            j++;
            count2--;
        }
        while(count1--)
        {
            ans += word1[i];
                i++;
        }
        while(count2--)
        {
            ans += word2[j];
                j++;
        }
        return ans;
    }
};