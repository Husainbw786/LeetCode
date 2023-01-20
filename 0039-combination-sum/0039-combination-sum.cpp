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
        
        // there are two choices one to select the element and one to not.
        // in if statement we are chossing that index. 
        if(candidates[i] <= target)
        {
            temp.push_back(candidates[i]);
            // recusrion call for choosing the same element ant no. of time till target is not equal to zero.
            // that why not increasing the index i in recursion call.
            solve(i,n,ans,candidates,target - candidates[i]);
            // removing the element we aree chossing.
            temp.pop_back();
        }
        // the second choice in which w are not selecting the element.and there increasing index.
            solve(i+1,n,ans,candidates,target);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        int n = candidates.size();
        vector<vector<int>>ans;
        solve(0,n,ans,candidates,target);
        return ans;
        
    }
};