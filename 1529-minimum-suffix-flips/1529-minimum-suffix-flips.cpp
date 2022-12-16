class Solution {
public:
    int minFlips(string target) {
        
        int n = target.size();
        int i;
        char check = '0';
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(check == target[i])
            {
                continue;
            }
            check = target[i];
            count++;
        }
        return count;
    }
};