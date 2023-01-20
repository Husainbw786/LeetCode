class Solution {
public:
    vector<int>temp;
    void solve(int i,set<vector<int>>&st,vector<int>nums,int n)
    {
        if(i == n)
        {
            st.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(i+1,st,nums,n);
        temp.pop_back();
        solve(i+1,st,nums,n);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>>v;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        solve(0,st,nums,n);
        for(auto x : st)
        {
            v.push_back(x);
        }
        return v;
    }
};