class Solution {
public:
    vector<vector<int>>ans;
    
    void permutation(vector<int>& nums, int low , int high)
    {
        if( low == high)
        {
            ans.push_back(nums);
            return;
        }
        for(int i = low; i<= high;i++)
        {
            swap(nums[low],nums[i]);
           permutation(nums,low+1,high);
            swap(nums[low],nums[i]);
                
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
       
        permutation(nums,0,nums.size()-1);
        return ans;
        
    }
};