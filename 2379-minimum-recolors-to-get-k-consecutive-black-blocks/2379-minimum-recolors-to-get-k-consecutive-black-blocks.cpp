class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        
        int i;
        int n = blocks.size();
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            int count = 0;
            int j = i;
            int x = k;
            while(j < n && x--)
            {
                if(blocks[j] == 'B')
                {
                    count++;
                }
                j++;
            }
            maxi = max(count,maxi); 
        }
        int ans = k - maxi;
        return k - maxi;
    }
};