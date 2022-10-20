class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        vector<int>ans(k);
        int n = arr.size();
         sort(arr.begin(),arr.end());
        int midIndex = (n-1)/2;
        int median = arr[midIndex];
        int low = 0;
        int high = n-1;
        int i;
        int count = 0;
        while(count < k)
        {
            int left = abs(arr[low] - median);
            int right = abs(arr[high] - median);
            if(right >= left)
            {
                ans[count] = arr[high];
                high--;
            }
            else
            {
                ans[count] = arr[low];
                low++;
            }
            count++;
        }
        return ans;
        
    }
};