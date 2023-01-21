class Solution {
public:
    vector<int>temp;
    
    void solve(int i,int n,vector<int>nums,vector<vector<int>>&ans)
    {
        if(i == n)
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(i+1,n,nums,ans);
        temp.pop_back();
        solve(i+1,n,nums,ans);
    }
    
    int subsetXORSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>>ans;
        solve(0,n,nums,ans);
        int sum = 0;
        for(int i=0;i<ans.size();i++)
        {
            vector<int>temp = ans[i];
            int xo = 0;
            for(auto x : temp)
            {
               xo = xo ^ x;
            }
            sum += xo;
        }
        return sum;
    }
};