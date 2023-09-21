class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++)
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
            if(k == count)
            {
                sum += nums[i];
            }
        }
        return sum;
    }
};