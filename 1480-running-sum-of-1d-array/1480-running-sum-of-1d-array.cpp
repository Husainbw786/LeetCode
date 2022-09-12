class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int>v;
        int i;
       int n = nums.size();
        int sum = 0;
        for(i=0;i<n;i++)
        {
            sum += nums[i];
            v.push_back(sum);
        }
        return v;
    }
};