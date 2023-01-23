class Solution {
public:
    vector<int>temp;
    void solve(int i,int n,vector<int>nums,set<vector<int>>&st)
    {
        if(i == nums.size())
        {
            if(temp.size() >= 2)
            {
              st.insert(temp);
            }
            return;
        }     
        
        if(temp.size() == 0 || temp.back() <= nums[i])
        {
            temp.push_back(nums[i]);
            solve(i+1,n,nums,st);
            temp.pop_back();
        }
            solve(i+1,n,nums,st);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>>ans;
        set<vector<int>>st;
        solve(0,n,nums,st);
        for(auto x : st)
        {
            ans.push_back(x);
        }
        return ans;
    }
};