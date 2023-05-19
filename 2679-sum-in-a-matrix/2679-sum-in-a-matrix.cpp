class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        
        int n = nums.size();
        int m = nums[0].size();
        int i,j;
        for(i=0;i<n;i++)
        {
            sort(nums[i].begin(),nums[i].end());
        }
        int score = 0;
        
        for(i=0;i<m;i++)
        {
            int maxi = 0;
            for(j=0;j<n;j++)
            {
                maxi = max(maxi,nums[j][i]);
            }
            score += maxi;
        }
        return score;
    }
};