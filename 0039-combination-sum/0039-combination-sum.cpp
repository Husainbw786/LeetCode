class Solution {
public:
    
    vector<int>temp;
    void solve(int i,int n,vector<vector<int>>&ans,vector<int>candidates,int target)
    {
        if(i == n)
        {
            if(target == 0)
            {
                ans.push_back(temp);
            }
            return;
        }
        if(candidates[i] <= target)
        {
            temp.push_back(candidates[i]);
            solve(i,n,ans,candidates,target - candidates[i]);
            temp.pop_back();
        }
            solve(i+1,n,ans,candidates,target);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        int n = candidates.size();
        set<vector<int>>st;
        vector<vector<int>>ans;
        solve(0,n,ans,candidates,target);
        return ans;
        
    }
};