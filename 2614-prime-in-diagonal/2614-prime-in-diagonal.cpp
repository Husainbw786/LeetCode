class Solution {
public:
    
    bool isprime(int x)
    {
        if(x <= 1)
        {
            return false;
        }
        int n = x/2;
        
      for(int j=2;j*j <= x;j++)
        {
            if(x % j == 0)
            {
                return false;
            }
        }
        return true;
    } 
    
    int diagonalPrime(vector<vector<int>>& nums) {
        
       int n = nums.size();
        int m = nums[0].size();
        vector<int>v;
        int i,j;
         int maxi = 0;
        for(i=0;i<n;i++)
        {
            if(isprime(nums[i][i]))
            {
                maxi = max(maxi,nums[i][i]);
            }
            if(isprime(nums[i][n-i-1]))
            {
                maxi = max(nums[i][n-i-1],maxi);
            }
        }
       
       return maxi;   
    }
};