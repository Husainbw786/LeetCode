class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        
        int n = nums.size();
        int i = 0;
        int maxi = 0;
        if(k == 0)
        {
            return nums[0];
        }
        if(k%2 != 0 && nums.size()==1) 
        {
           return -1;
        }
        
        while(i <n && i < k-1)
        {
            maxi = max(maxi,nums[i]);
            i++;
            
        }
        if(k < n)
        {
           maxi = max(maxi,nums[k]);    
        }
        
        return maxi;
    }
};