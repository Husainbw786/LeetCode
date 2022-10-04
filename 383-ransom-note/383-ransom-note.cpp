class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     
        int freq[26] = {0};
        int i;
        for(i=0;i<magazine.size();i++)
        {
            freq[magazine[i] - 'a']++;
        }
        for(i=0;i<ransomNote.size();i++)
        {
            if(freq[ransomNote[i] - 'a'] > 0)
            {
                freq[ransomNote[i] - 'a']--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};