class Solution {
public:
    
    vector<int>temp;
    void solve(int idx, int n, vector<vector<int>>&ans, int target,vector<int>arr)
    {
            if(target == 0)
            {
                ans.push_back(temp);
                return;
            }
        for(int i=idx;i<n;i++)
        {  
            if( i > idx && arr[i] == arr[i-1] )
            {
              continue;
            }
            if(arr[i] > target)
            {
                break;
            }
            temp.push_back(arr[i]);
            solve(i+1,n,ans,target - arr[i],arr);
            temp.pop_back();
        }
        
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
     
        
        sort(candidates.begin(),candidates.end());
        int i;
        int n = candidates.size();
        vector<vector<int>>ans;
        solve(0,n,ans,target,candidates);
        return ans;
    }
};