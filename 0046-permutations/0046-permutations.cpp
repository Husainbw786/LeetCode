class Solution {
public:
    
    vector<int>temp;
    void solve(int n,vector<int>&freq,vector<int>nums,vector<vector<int>>&ans)
    {
        if(temp.size() == n)
        {
           ans.push_back(temp);
           return;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            if(freq[i] == 0)
            {
                temp.push_back(nums[i]);
                freq[i] = 1;
                solve(n,freq,nums,ans);
                temp.pop_back();
                freq[i] = 0;
            }
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>freq(n,0);
        vector<vector<int>>ans;
        solve(n,freq,nums,ans); 
       
        return ans;
    }
};