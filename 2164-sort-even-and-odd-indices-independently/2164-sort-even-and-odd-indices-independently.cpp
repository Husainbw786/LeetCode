class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        vector<int>even;
        vector<int>odd;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(i % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        reverse(odd.begin(),odd.end());
        vector<int>ans;
        int m = odd.size();
        int i = 0;
        int j = 0;
        n = max(even.size(),odd.size());
        
        while(i < n)
        {
            if(i != even.size())
            {
             ans.push_back(even[i]);
            }
            if(i != odd.size())
            {
              ans.push_back(odd[i]);  
            }
            i++;
        }
        
        return ans;
    }
};