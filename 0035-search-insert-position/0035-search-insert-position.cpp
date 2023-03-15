class Solution {
public:
    
    int Search(vector<int>& arr, int target, int low,int high)
    {
        int mid = low + (high-low)/2;
        if(low <= high)
        {
            if(arr[mid] == target)
            {
                return mid;
            }
            else if(arr[mid] > target)
            {
                return Search(arr,target,low,mid-1);
            }
            else
            {
                return Search(arr,target,mid+1,high);
            }
        }
       
        return low;
    }
    
    int searchInsert(vector<int>& nums, int target) {
        
        return Search(nums,target,0,(nums.size()-1));
    }
};