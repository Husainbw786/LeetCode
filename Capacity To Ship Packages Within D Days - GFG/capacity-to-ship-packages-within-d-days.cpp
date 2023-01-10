//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
   bool func(int mid,int arr[],int N, int D)
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
  
  
    int leastWeightCapacity(int arr[], int n, int days) {
        // code here
        
        int sum = 0;
        int max = 0;
        int i;
        for(i=0;i<n;i++)
        {
            sum += arr[i];
            if(max < arr[i])
            {
                max = arr[i];
            }
        }
        int low = max;
        int high = sum;
        int ans;
        while(low <= high)
        {
            int mid = (high + low)/2;
            if(func(mid,arr,n,days))
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

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends