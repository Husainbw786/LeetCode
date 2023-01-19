// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> jugglerSequence(int N){
        // code here
        vector<int>dp;
        dp.push_back(N);
        int i = 1;
        while(dp[i-1] != 1)
        {
            
            if(dp[i-1] % 2 == 0)
            {
               
                dp.push_back(floor(pow(dp[i-1],0.5)));
            }
            else
            {
                dp.push_back(floor(pow(dp[i-1],1.5)));
            }
            i++;
        }
        return dp;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends