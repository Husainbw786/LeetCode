class Solution {
public:
    bool isPalindrome(int x) {
        int i;
        string str = to_string(x);
        for(i=0;i<str.length()/2;i++)
        {
            if(str[i] != str[str.length()-i-1])
                return false;
                
        }
        return true;
        
    }
};