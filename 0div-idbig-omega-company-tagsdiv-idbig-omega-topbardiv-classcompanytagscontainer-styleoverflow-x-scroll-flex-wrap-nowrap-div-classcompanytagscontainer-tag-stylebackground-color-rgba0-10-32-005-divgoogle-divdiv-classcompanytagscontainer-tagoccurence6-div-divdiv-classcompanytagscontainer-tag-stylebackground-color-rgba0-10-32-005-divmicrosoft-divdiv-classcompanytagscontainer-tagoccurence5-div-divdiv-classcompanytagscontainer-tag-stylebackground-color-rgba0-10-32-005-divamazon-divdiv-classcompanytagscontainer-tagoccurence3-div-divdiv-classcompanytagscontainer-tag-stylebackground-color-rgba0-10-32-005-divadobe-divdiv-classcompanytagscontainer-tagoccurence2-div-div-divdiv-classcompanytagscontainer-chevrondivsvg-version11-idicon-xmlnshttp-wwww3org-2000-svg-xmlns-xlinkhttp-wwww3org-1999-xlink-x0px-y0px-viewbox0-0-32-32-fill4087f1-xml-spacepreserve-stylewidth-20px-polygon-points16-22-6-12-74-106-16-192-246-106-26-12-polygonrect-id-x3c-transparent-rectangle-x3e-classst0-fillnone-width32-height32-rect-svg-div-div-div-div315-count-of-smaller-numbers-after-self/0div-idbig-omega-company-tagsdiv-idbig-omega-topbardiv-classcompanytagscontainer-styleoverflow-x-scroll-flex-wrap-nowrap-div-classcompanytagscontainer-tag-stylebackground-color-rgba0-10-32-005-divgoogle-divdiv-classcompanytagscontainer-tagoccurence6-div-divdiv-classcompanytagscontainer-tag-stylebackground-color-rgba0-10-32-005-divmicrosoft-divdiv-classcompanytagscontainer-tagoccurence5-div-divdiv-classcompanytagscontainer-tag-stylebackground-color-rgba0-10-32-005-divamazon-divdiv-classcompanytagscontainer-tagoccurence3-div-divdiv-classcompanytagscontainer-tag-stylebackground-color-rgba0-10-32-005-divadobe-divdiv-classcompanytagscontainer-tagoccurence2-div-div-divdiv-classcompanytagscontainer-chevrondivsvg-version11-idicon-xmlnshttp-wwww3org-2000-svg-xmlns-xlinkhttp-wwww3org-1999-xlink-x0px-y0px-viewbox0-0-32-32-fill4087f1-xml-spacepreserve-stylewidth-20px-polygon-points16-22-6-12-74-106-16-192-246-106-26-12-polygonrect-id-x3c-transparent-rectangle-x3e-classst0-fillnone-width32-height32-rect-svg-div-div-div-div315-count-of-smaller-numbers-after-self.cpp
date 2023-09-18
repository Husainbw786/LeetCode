class Solution {
public:
    
    void merge(vector<pair<int,int>>&arr, int low ,int mid, int high, vector<int>&count)
    {
        vector<pair<int,int>>temp(high-low+1);
        int i = low;
        int j = mid+1;
        int k = 0;
        while(i <= mid && j <= high)
        {
            if(arr[i].first <= arr[j].first)
            {
                temp[k] = arr[j];
                k++;
                j++;
            }
            else
            {
                count[arr[i].second] += high-j+1;
                temp[k] = arr[i];
                i++;
                k++;
            }
        }
       while(i <= mid)
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        
        while(j <= high)
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
        
        
        for(int i=low;i<=high;i++)
        {
            arr[i] = temp[i-low];
        }
    }
    
    void merge_sort(vector<pair<int,int>>&v,int low, int high, vector<int>&count)
    {
        if(low >= high)
        {
            return;
        }
        int mid = low + (high - low)/2;
        merge_sort(v,low,mid,count);
        merge_sort(v,mid+1,high,count);
        
        merge(v,low,mid,high,count);
        
        
    }
    
    vector<int> countSmaller(vector<int>& nums) {
        
        int n = nums.size();
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({nums[i],i});
        }
        
        vector<int>count(n,0);
        int low = 0;
        int high = n-1;
        merge_sort(v,low,high,count);
        return count;
    }
};