class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        vector<int>leftsum;
        vector<int>rightsum;
        int sum = 0;
        for(i=0;i<n;i++)
        {
            leftsum.push_back(sum);
            sum += nums[i];
        }
        sum = 0;
        for(i=n-1;i>=0;i--)
        {
            rightsum.push_back(sum);
            sum += nums[i];
        }
        reverse(rightsum.begin(),rightsum.end());
        for(i=0;i<n;i++)
        {
           rightsum[i] = abs(rightsum[i] - leftsum[i]);  
        }
        return rightsum;
        
    }
};