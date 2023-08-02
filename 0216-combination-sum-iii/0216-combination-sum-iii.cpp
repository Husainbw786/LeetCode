class Solution {
public:
    
    void solve(int i, vector<int>nums,int k, int n, set<vector<int>>&st, vector<int>temp)
    {
        if(i == nums.size())
        {
            if(temp.size() == k && n == 0)
            {
                st.insert(temp);
            }
            return;
        }

        if(nums[i] <= n)
        {
            temp.push_back(nums[i]);
            solve(i+1,nums,k,n-nums[i],st,temp);
            temp.pop_back();
        }
        solve(i+1,nums,k,n,st,temp);
        
    }
       
    
    vector<vector<int>> combinationSum3(int k, int n) {
     
        vector<vector<int>>ans;
        set<vector<int>>st;
        vector<int>nums;
        for(int i=1;i<=9;i++)
        {
            nums.push_back(i);
        }
        vector<int>temp;
        solve(0,nums,k,n,st,temp);
        for(auto x : st)
        {
            ans.push_back(x);
        }
        return ans;
        
    }
};