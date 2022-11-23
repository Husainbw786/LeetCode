class Solution {
public:
    int countVowelSubstrings(string word) {
        int n = word.size();
        int i;
        string temp = "";
        int count = 0;
        for(i=0;i<n;i++)
        {
            if( !(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' ||  word[i] == 'u'))
            {
                continue;
            }
            unordered_map<char,int>mp;
            
            for(int j=i;j<n;j++)
            {
                char ch = word[j];
                if( !(word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || word[j] == 'o' ||  word[j] == 'u'))
                {
                    break;
                }
                mp[ch]++;
                if(mp.size() == 5)
                {
                    count++;
                }
            }
        }
        return count;
    }
};