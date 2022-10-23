class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        unordered_map<string,int>mp1;
        unordered_map<string,int>mp2;
        
        int i;
        int n = words1.size();
        for(i=0;i<n;i++)
        {
            mp1[words1[i]]++;
        }
        n = words2.size();
        for(i=0;i<n;i++)
        {
            mp2[words2[i]]++;
        }
        vector<string>v1;
        int count = 0;
        n = words1.size();
        for(i=0;i<n;i++)
        {
            if(mp1.find(words1[i]) != mp1.end() && mp1[words1[i]] == 1)
            {
                if(mp2.find(words1[i]) != mp2.end() && mp2[words1[i]] == 1)
                {
                   count++; 
                }
                
            }
        }
        return count;
    }
};