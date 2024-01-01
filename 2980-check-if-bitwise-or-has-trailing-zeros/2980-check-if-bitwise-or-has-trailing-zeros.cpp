class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        int count = 0;
        for(i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int x = nums[i] | nums[j];
                if(!(x&1))
                {
                    return true;
                }
            }
        }
       
        return false;
    }
};
