class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        vector<int>ans(n,-1);
        for(i=0;i<n;i++)
        {
            int j = i+1;
            bool flag = false;
            while(j < n)
            {
                if(nums[j] > nums[i])
                {
                    ans[i] = nums[j];
                    flag = true;
                    break;
                }
                j++;
            }
            if(!flag)
            {
                int k = 0;
                while(k < i)
                {
                    if(nums[k] > nums[i])
                    {
                        ans[i] = nums[k];
                        break;
                    }
                    k++;
                }
            }
        }
        return ans;
    }
};