class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
     
     int n = nums.size();
     int i;
     long long int sum = 0;
     long long int curr = 0;
     sort(nums.begin(),nums.end());
     for(i=0;i<n;i++)
     {
       sum += nums[i]; 
     }
    for(i=n-1;i>=0;i--)
    {
       curr += nums[i];
       long long int rem = sum - curr;
       if(rem > nums[i])
       {
           return rem + nums[i];
       }
    }
    return -1;
            
    }
};
    
  
       
            