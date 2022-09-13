class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
           vector<int>v;
        int i;
        int j = n;
        for(i=0;i<nums.size()/2;i++)
        {
            v.push_back(nums[i]);
            v.push_back(nums[j]);
            j++;
        }
        return v;
    }
};