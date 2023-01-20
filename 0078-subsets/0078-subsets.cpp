class Solution {
public:
    vector<int>temp;
    void solve(int i,int n,vector<int>nums,set<vector<int>>&st)
    {
        if(i == n)
        {
            st.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(i+1,n,nums,st);
        temp.pop_back();
        solve(i+1,n,nums,st);
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>v;
        int n = nums.size();
        set<vector<int>>st;
        solve(0,n,nums,st);
        for(auto x : st)
        {
          v.push_back(x);   
        }
        return v;
        
    }
};