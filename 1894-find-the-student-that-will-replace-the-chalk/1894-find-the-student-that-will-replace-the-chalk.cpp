class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
     
        int i = 0;
        int n = chalk.size();
        int sum = 0;
        for(i=0;i<n;i++)
            {
                if(k-chalk[i] >= 0)
                {
                    k = k - chalk[i];
                    sum += chalk[i];
                }
                else
                {
                    return i;
                }
            }
             k = k %sum;
            for(i=0;i<n;i++)
            {
                if(k-chalk[i] >= 0)
                {
                    k = k - chalk[i];
                }
                else
                {
                    return i;
                }
            }
        if(i == n)
        {
            return 0;
        }
        return i;
    }
};