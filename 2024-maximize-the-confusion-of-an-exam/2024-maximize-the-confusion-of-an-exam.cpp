class Solution {
public:
    int maxConsecutiveAnswers(string answer, int k) {
        
        int i = 0;
        int j = 0;
        int n = answer.size();
        int count = 1;
        int maxi1 = 0;
        int maxi2 = 0;
        int x = k;
        while(j < n)
        {
            if(answer[j] == 'T')
            {
                j++;
            }
            else if(answer[j] != 'T' && k > 0)
            {
                k--;
                j++;
            }
            else if(answer[i] == 'T' && k <= 0)
            {
                i++;
            }
            else if(answer[i] != 'T' && k <= 0)
            {
                i++;
                k++;
            }
    
            maxi1 = max(j-i,maxi1);
        }
        i = 0;
        j = 0;
        k = x;
        while(j < n)
        {
            if(answer[j] == 'F')
            {
                j++;
            }
            else if(answer[j] != 'F' && k > 0)
            {
                k--;
                j++;
            }
            else if(answer[i] == 'F' && k <= 0)
            {
                i++;
            }
            else if(answer[i] != 'F' && k <= 0)
            {
                i++;
                k++;
            }
    
            maxi2 = max(j-i,maxi2);
        }
        return max(maxi1,maxi2);
    }
};