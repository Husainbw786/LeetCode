class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int i = 0;
        int n = nums.size();
        int j = n-1;
        sort(nums.begin(),nums.end());
        int count = 0;
        while(i < j)
        {
            int sum = nums[i] + nums[j];
            if(sum == k)
            {
                count++;
                i++;
                j--;
            }
            else if( sum > k)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return count;
              
    }
};