class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
       
        int n = nums.size();
        int i;
        vector<int>v;
        v.push_back(nums[0]);
        int j=0;
        for(i=1;i<n;i++)
        {
            if(nums[i] > v[j])
            {
                j++;
                v.push_back(nums[i]);
                if(j == 2)
                {
                    break;
                }
            }
            else if(nums[i] < v[j])
            {
                if(j == 0)
                {
                    v[j] = nums[i];
                }
                else if(j != 0 && v[j-1] < nums[i])
                {
                   v[j] = nums[i];
                }
                else if(v[j-1] > nums[i])
                {
                    v[j-1] = nums[i];
                }
            }
        }
        if(v.size() < 3)
        {
            return false;
        }
        for(i=0;i<2;i++)
        {
            if(v[i] > v[i+1])
            {
                return false;
            }
        }
      return true;  
    }
};