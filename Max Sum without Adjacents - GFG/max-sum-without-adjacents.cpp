//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	
	int solve(int idx, int* arr,vector<int>&dp)
	{
	    if(idx == 0)
	    {
	        return arr[0];
	    }
	    if(idx < 0)
	    {
	        return 0;
	    }
	    if(dp[idx] != -1)
	    {
	        return dp[idx];
	    }
	    int pick = arr[idx] + solve(idx-2,arr,dp);
	    int not_pick = solve(idx-1,arr,dp);
	    return dp[idx] = max(pick,not_pick);
	}
	
	int findMaxSum(int *arr, int n) {
	    // code here
	   vector<int>dp(n,0);
	   if(n == 1)
	   {
	       return arr[0];
	   }
	   dp[0] = arr[0];
	   dp[1] = max(arr[1],arr[0]);
	   
	   for(int i=2;i<n;i++)
	   {
	       int pick = arr[i] + dp[i-2];
	       int not_pick = dp[i-1];
	       dp[i] = max(pick,not_pick);
	   }
	   return dp[n-1];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends