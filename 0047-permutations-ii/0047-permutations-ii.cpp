class Solution {
public:
    vector<int>temp;
    
    void solve(int n,vector<int>nums,vector<int>&check,set<vector<int>>&st)
    {
         if(temp.size() == n)
         {
             st.insert(temp);
         }
         for(int i=0;i<n;i++)
         {
             if(check[i] == 0)
             {
                 temp.push_back(nums[i]);
                 check[i] = 1;
                 solve(n,nums,check,st);
                 temp.pop_back();
                 check[i] = 0;
             }
         }
        
    }
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        int n = nums.size();
        set<vector<int>>st;
        vector<int>check(n,0);
        vector<vector<int>>ans;
        solve(n,nums,check,st);
        for(auto x : st)
        {
            ans.push_back(x);
        }
        return ans;
        
    }
};