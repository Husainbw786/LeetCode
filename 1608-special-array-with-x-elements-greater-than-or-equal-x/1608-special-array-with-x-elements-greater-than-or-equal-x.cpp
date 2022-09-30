class Solution {
public:
    int Solve(vector<int>&nums , int val)
    {
        int count = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] >= val)
            {
                count++;
            }
        }
        return count;
    }
    
    int specialArray(vector<int>& nums) {
        int low = 0;
        int high = 1000;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            int comp = Solve(nums,mid);
            if(comp == mid)
            {
                return comp;
            }
            if(comp > mid)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return -1;
        
    }
};