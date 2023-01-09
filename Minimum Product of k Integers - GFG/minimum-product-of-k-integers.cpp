//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int minProduct(int arr[], int n, int k)
    {
        // Complete the function
        long long int product=1;
        int i;
        long long int mod = 1000000007;
        sort(arr,arr+n);
        for(i=0; i<n; i++){
            if(k>0){
            product*=arr[i];
            product=product%mod;
            k--;
        }
        }
        return product%mod;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cin>>k;
        Solution ob;
	    cout<<ob.minProduct(arr, n, k)<<endl;
    }
	return 0;
}

// } Driver Code Ends