class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int i,j,k;
        sort(nums.begin(),nums.end());
        int sum = nums[0] + nums[1] + nums[2];
        int n = nums.size();
        int closest = INT_MAX;
        for(i=0;i<n-2;i++)
        {
            j = i+1;
            k = n-1;
            while(j<k)
            {
                int temp = nums[i] + nums[j] + nums[k];
                 if(abs(temp-target) < abs(sum-target))
                 {
                     sum=temp;
                 }
                if(temp > target)
                {
                    k--;    
                }
                else if(temp < target )
                {
                    j++;
                } 
                else
                {
                    return target;
                }   
            }
        }
        return sum;
    }
};