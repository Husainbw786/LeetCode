class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
      
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        int n = word1.size();
        int m = word2.size();
        int i;
        for(i=0;i<n;i++)
        {
          mp1[word1[i]]++;
        }
        for(i=0;i<n;i++)
        {
          mp2[word2[i]]++;
        }
        for(i=0;i<n;i++)
        {
           if(mp2.find(word1[i]) != mp2.end())
           {
               if(abs(mp2[word1[i]] - mp1[word1[i]]) > 3)
               {
                   return false;
               }
           }
           else
           {
               if(mp1[word1[i]] > 3)
               {
                   return false;
               }
           }
        }
        for(i=0;i<m;i++)
        {
           if(mp1.find(word2[i]) != mp1.end())
           {
               if(abs(mp1[word2[i]] - mp2[word2[i]]) > 3)
               {
                   return false;
               }
           }
           else
           {
               if(mp2[word2[i]] > 3)
               {
                   return false;
               }
           }
        }
        return true;
    }
};