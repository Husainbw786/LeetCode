class Solution {
public:
    int countPrimes(int n) {
        
        if(n==0)
        {
            return 0;
        }
        vector<bool>v(n,true);
        v[0] = false;
        v[1] = false;
        int i;
        for(i=2;i*i<n;i++)
        {
            if(!v[i])
            {
                continue;
            }
            for(int j=i*i;j<n;j+=i)
            {
                v[j] = false;
            }
        }
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(v[i])
            {
                count++;
            }
        }
        return count;
    }
};