class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return -1;
        }

        vector<int> leftMax(n);
        vector<int> rightMax(n);

       
        leftMax[0] = nums[0];
        for (int i = 1; i < n; i++) 
        {
            leftMax[i] = min(leftMax[i - 1], nums[i]);
        }

        rightMax[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rightMax[i] = min(rightMax[i + 1], nums[i]);
        }

        int minSum = INT_MAX;
        for (int j = 1; j < n - 1; j++) {
            if (nums[j] > leftMax[j - 1] && nums[j] > rightMax[j + 1]) {
                int sum = nums[j] + leftMax[j - 1] + rightMax[j + 1];
                minSum = min(minSum, sum);
            }
        }

        return (minSum == INT_MAX) ? -1 : minSum;
    }
};
