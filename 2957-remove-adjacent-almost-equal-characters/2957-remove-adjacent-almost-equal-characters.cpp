class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
     
        int n = word.size();
        int i;
        int count = 0;
        
        for(i=0;i<n-1;i++)
        {
            if(abs(int(word[i]) - int(word[i+1])) <= 1)
            {
                count++;
                i++;
            }
        }
        return count;
                
    }
};