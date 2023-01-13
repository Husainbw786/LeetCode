class Solution {
public:
    vector<int> countBits(int n) {
        
        int i;
        vector<int>v;
        for(i=0;i<=n;i++)
        {
            int x = i;
            int count = 0;
            while(x)
            {
                if(x & 1)
                {
                    count++;
                }
                x = x >> 1;
            }
            v.push_back(count);
        }
        return v;
    }
};