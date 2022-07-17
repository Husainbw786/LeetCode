class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int arr[n];
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return nums[0];
        }
        if(n==2)
        {
            return max(nums[0],nums[1]);
        }
        arr[0] = nums[0];
        arr[1] = max(nums[0],nums[1]);
        int i;
        for(i=2;i<n;i++)
        {
            arr[i] = max(arr[i-2]+nums[i],arr[i-1]);
        }
        return arr[n-1];
        
    }
};
