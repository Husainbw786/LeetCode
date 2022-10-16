class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        vector<int>even;
        vector<int>odd;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i] % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        vector<int>ans;
        n = even.size();
        for(int i=0;i<n;i++)
        {
           ans.push_back(even[i]);
           ans.push_back(odd[i]);
        }
        return ans;
    }
};