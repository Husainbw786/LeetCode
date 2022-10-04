class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     
        unordered_map<char,int>mp;
        int i;
        for(i=0;i<magazine.size();i++)
        {
            mp[magazine[i]]++;
        }
        for(i=0;i<ransomNote.size();i++)
        {
            if(mp.find(ransomNote[i]) != mp.end() && mp[ransomNote[i]] > 0)
            {
                mp[ransomNote[i]]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};