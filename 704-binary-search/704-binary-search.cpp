class Solution {
public:
    
    int Binary_Search(vector<int>& arr, int & target,int low,int high)
    {
        int mid = low + (high - low) / 2;
        if(low <= high)
        {
            if(arr[mid] == target)
            {
                return mid;
            }
            else if(arr[mid] > target)
            {
                return Binary_Search(arr,target,low,mid-1);
            }

            else if(arr[mid] < target)
            {
                return Binary_Search(arr,target,mid+1,high);
            }
        }
       return -1;
        
    }
    
    int search(vector<int>& nums, int target) {
        
        return Binary_Search(nums,target,0,(nums.size()-1));
    }
};