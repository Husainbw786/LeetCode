//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isProduct(int arr[], int n, long long x) {
        // code here
        unordered_map<long double,int>mp;
        int i;
        for(i=0;i<n;i++)
        {
            long double ans = (long double) x / arr[i];
            if(mp.find(ans) != mp.end())
            {
                return true;
            }
            mp[arr[i]]++;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        long long x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.isProduct(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
// } Driver Code Ends