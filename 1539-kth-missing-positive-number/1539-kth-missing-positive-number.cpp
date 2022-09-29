class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int low = 0;
        int high = arr.size()-1;
        int close_mid = 0;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(arr[mid] - (mid+1) < k)
            {
                close_mid = mid + 1;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return k + close_mid;
    }
};