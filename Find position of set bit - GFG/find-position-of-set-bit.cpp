//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        int count = 0;
        bool flag = false;
        while(N)
        {
            if(N&1 && !flag)
            {
                flag = true;
            }
            else if(N&1 && flag)
            {
                return -1;
            }
           count++;
           N = N >> 1;
        }
       if(!flag)
       {
           return -1;
       }
       return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends