//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    vector<int> removeDuplicate(int A[], int N) {
     
     unordered_map<int,bool>mp;
     int i;
     for(i=0;i<N;i++)
     {
         mp[A[i]] = false;
     }
     vector<int>ans;
     for(i=0;i<N;i++)
     {
         if(mp.find(A[i]) != mp.end() && mp[A[i]] == false)
         {
             ans.push_back(A[i]);
             mp[A[i]] = true;
         }
     }
     return ans;
     
    }
};

//{ Driver Code Starts.

// Driver method to test above method
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<int> v = ob.removeDuplicate(a, n);

        for (auto it : v) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends