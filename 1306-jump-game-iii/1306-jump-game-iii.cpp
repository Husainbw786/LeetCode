class Solution {
public:
    
    bool dfs(int i, vector<int>&arr, vector<int>&vis)
    {
        if(i < 0 || i >= arr.size() || vis[i] == 1)
        {
            return false;
        }
        if(arr[i] == 0)
        {
            return true;
        }
        vis[i] = 1;
        return dfs(i + arr[i],arr,vis) || dfs(i - arr[i],arr,vis);
    }
    
    bool canReach(vector<int>& arr, int start) {
        
        int n = arr.size();
        vector<int>vis(n,0);
        return dfs(start,arr,vis);
        
    }
};