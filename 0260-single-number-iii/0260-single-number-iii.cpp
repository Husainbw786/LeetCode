class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0;
        sort(nums.begin(),nums.end());
        vector<int>ans;
        while(i < n-1)
        {
            if(nums[i] == nums[i+1])
            {
                i += 2;
            }
            else
            {
                ans.push_back(nums[i]);
                i++;
                if(ans.size() == 2)
                {
                    break;
                }
            }
        }
        if(nums[n-2] != nums[n-1])
        {
            ans.push_back(nums[n-1]);
        }
       return ans;  
    }
};
           
     