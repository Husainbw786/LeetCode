//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void gfSeries(int N)
    {
        // Write Your Code here
        long long int dp[N];
        int i;
        dp[0] = 0;
        dp[1] = 1;
        for(i=2;i<N;i++)
        {
            dp[i] = (dp[i-2]*dp[i-2]) - dp[i-1];
        }
        for(i=0;i<N;i++)
        {
            cout << dp[i] << " ";
        }
        cout << endl;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}
// } Driver Code Ends