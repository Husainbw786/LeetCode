class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int n = word.size();
        int i;
        int count_capital = 0;
        int count_small = 0;
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(word[i] >= 'A' && word[i] <= 'Z')
            {
                count_capital++;
            }
            else if(word[i] >= 'a' && word[i] <= 'z')
            {
                count_small++;
            }
        }
        if(n == count_capital || n == count_small)
        {
            return true;
        }
        if(count_capital == 1 && count_small == n-1 && word[0] >= 'A' && word[0] <= 'Z')
        {
            return true;
        }
        return false;
    }
};