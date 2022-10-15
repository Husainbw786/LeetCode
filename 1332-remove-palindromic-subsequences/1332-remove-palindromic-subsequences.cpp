class Solution {
public:
    int removePalindromeSub(string s1) {
     
        string s2 = s1;
        reverse(s2.begin(),s2.end());
        if(s1 == s2)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    
    }
};