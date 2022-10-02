class Solution {
public:
    int commonFactors(int a, int b) {
        
        int i;
        int mini = min(a,b);
        int count = 0;
        for(i=1;i<=mini;i++)
        {
            if(a % i == 0 && b % i == 0)
            {
                count++;
            }
        }
        return count;
    }
};