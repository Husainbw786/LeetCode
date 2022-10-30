class Solution {
public:
    bool isSumEqual(string firstword, string secondword, string targetword) {
        
       int first = 0 ,second = 0, third = 0;
        int i;
        int n = firstword.size();
        for(i=0;i<n;i++)
        {
             first = first*10 + (firstword[i] - 'a');
        }
        n = secondword.size();
        for(i=0;i<n;i++)
        {
             second = second*10 + (secondword[i] - 'a');
        }
         n = targetword.size();
        for(i=0;i<n;i++)
        {
             third = third*10 + (targetword[i] - 'a');
        }
        if(first + second == third)
        {
            return true;
        }
        return false;
        
    }
};