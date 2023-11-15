class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        int maxi = 1;
        int n = arr.size();
        if(arr[0] != 1)
        {
            arr[0] = 1;
            maxi = max(maxi,arr[0]);
        }
        for(int i=1;i<n;i++)
        {
            if(abs(arr[i-1] - arr[i]) <= 1)
            {
                maxi = max(arr[i],maxi);
                continue;
            }
            else
            {
                arr[i] = maxi + 1;
                maxi = arr[i];
            }
        }
        return maxi;
    }
};