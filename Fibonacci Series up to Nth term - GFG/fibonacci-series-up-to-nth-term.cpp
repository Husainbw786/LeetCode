//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> Series(int N) {
        // COde here
        vector<long long int>dp(N+1);
        int i;
        dp[0] = 0;
        dp[1] = 1;
        for(i=2;i<=N;i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<long long> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends