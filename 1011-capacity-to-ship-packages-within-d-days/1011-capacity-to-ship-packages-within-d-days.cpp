class Solution {
public:
    
    bool func(int mid,vector<int>& arr,int N, int D)
    {
        int sum = 0;
        int days = 1;
        for(int i=0;i<N;i++)
        {
            if(sum + arr[i] <= mid)
            {
                sum += arr[i];
            }
            else
            {
                sum = arr[i];
                days++;
            }
        }
        if(days <= D)
        {
            return true;
        }
        return false;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int n = weights.size();
        int sum = 0;
        int max = 0;
        int i;
        for(i=0;i<n;i++)
        {
            sum += weights[i];
            if(max < weights[i])
            {
                max = weights[i];
            }
        }
        int low = max;
        int high = sum;
        int ans;
        while(low <= high)
        {
            int mid = (high + low)/2;
            if(func(mid,weights,n,days))
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};