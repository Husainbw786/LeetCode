class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int>left,mid,right;
        int n = nums.size();
        int i;
        for(i=0;i<n;i++)
        {
            if(nums[i] < pivot)
            {
                left.push_back(nums[i]);
            }
            else if(nums[i] == pivot)
            {
                mid.push_back(nums[i]);
            }
            else
            {
                right.push_back(nums[i]);
            }
        }
        for(i=0;i<mid.size();i++)
        {
            left.push_back(mid[i]);
        }
        for(i=0;i<right.size();i++)
        {
            left.push_back(right[i]);
        }
       return left; 
    }
};