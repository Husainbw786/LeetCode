class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int n = word.size();
        int i;
        bool flag = false;
        for( i=0;i<n;i++)
        {
            if(word[i] == ch)
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            return word;
        }
        i++;
        reverse(word.begin(),word.begin()+i);
        return word;
    }
};