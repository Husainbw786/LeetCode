class Solution {
public:
    
    
    void merge(vector<int>&nums,int low ,int mid, int high)
    {
        vector<int>temp;
        int i = low;
        int j = mid+1;
        while(i <= mid && j <= high)
        {
            if(nums[i] <= nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i <= mid)
        {
          temp.push_back(nums[i]);
          i++;  
        }
        while(j <= high)
        {
             temp.push_back(nums[j]);
             j++;
        }
        for(int i=low;i<=high;i++)
        {
            nums[i] = temp[i-low];
        }
    }
    
    void mergesort(vector<int>&nums, int low ,int high)
    {
        if(low >= high)
        {
            return;
        }
        int mid = low + (high - low)/2;
        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
    
    vector<int> sortArray(vector<int>& nums) {
     
        int n = nums.size();
        int low = 0;
        int high = n-1;
        mergesort(nums,low,high);
        
        return nums;
        
    }
};