//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int findUnique(int a[], int n, int k) {
        
    unordered_map<int,int>mp;
    int i;
    for(i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    for(auto x : mp)
    {
        if(x.second % k != 0)
        {
            return x.first;
        }
    }
    return 0;
    
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution obj;
        cout << obj.findUnique(a, n, k) << endl;
    }
}
// } Driver Code Ends