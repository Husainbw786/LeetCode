//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:

    long long int solve(int N)
    {
        if(N == 0)
        {
            return 0;
        }
        if(N == 1)
        {
            return 1;
        }
        long long int x = solve(N-2);
        long long int y = solve(N-1);
        x = x*x;
        x = x - y;
        return x;
    }
   


    void gfSeries(int N)
    {
        // Write Your Code here
        int i;
        for(i=0;i<N;i++)
        {
            cout << solve(i) << " ";
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