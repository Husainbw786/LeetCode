class Solution {
public:
    string sortVowels(string s) {
        
        
        string vowel1 = "";
        string vowel2 = "";
        int i;
        int n = s.size();
        for(i=0;i<n;i++)
        {
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                vowel1 += s[i];
            }
        }
        sort(vowel1.begin(),vowel1.end());
        for(i=0;i<n;i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                vowel2 += s[i];
            }
        }
         sort(vowel2.begin(),vowel2.end());
        vowel1 += vowel2;
        int j = 0;
        for(i=0;i<n;i++)
        {
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
            {
                s[i] = vowel1[j];
                j++;
            }
        }
        return s;
        
    }
};