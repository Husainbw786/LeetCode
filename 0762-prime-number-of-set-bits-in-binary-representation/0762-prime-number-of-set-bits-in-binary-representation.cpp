class Solution {
public:
    int countPrimeSetBits(int left, int right) {
     
        int i;
        int ans = 0;
        for(i=left;i<=right;i++)
        {
            int count = 0;
            int x = i;
            while(x)
            {
                if(x&1)
                {
                    count++;
                }
                x = x >> 1;
            }
            bool flag = true;
            if(count == 0 || count == 1)
            {
                continue;
            }
            for(int k=2;k<=count/2;k++)
            {
                if(count % k == 0)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                ans++;
            }
        }
        return ans;
    }
};