class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
     
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int n = nums.size();
        for(int i=0;i<n-1;i++)
        {
            int x = nums[i];
            int y = nums[i+1];
            ans.push_back(y);
            ans.push_back(x);
            i++;
        }
        return ans;
        
    }
};