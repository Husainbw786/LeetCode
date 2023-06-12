//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        
         int dp[n+1][n+1];
        
         int i,j;
        int wt[n];
        for(int i=1;i<n+1;i++)
        {
            wt[i-1]=i;
        }
         for(i=0;i<n+1;i++)
         {
             for(j=0;j<n+1;j++)
             {
                 if(i==0 || j == 0)
                 {
                     dp[i][j] = 0;
                 }
             }
         }
         for(i=1;i<=n;i++)
         {
             for(j=1;j<=n;j++)
             {
                 if(wt[i-1] <= j)
                 {
                     dp[i][j] = max(price[i-1] + dp[i][j-wt[i-1]], dp[i-1][j]);
                 }
                 else
                 {
                     dp[i][j] = dp[i-1][j];
                 }
             }
         }
         return dp[n][n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends