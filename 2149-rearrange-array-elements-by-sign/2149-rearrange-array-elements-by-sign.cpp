class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int>neg;
        vector<int>pos;
        int n = nums.size();
        int i;
        for(i=0;i<n;i++)
        {
            if(nums[i] < 0)
            {
                neg.push_back(nums[i]);
            }
            else
            {
                pos.push_back(nums[i]);
            }
        }
        vector<int>ans;
        i = 0;
        n = pos.size();
        while(i<n)
        {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
            i++;
        }
        return ans;
    }
};