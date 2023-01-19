//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long count = 0;
    long long solve(int N, int i)
    {
        count++;
        if(i == N)
        {
            return count;
        }
        return count * solve(N,i+1);
        
    }
    long long sequence(int N)
    {
        // code here
        long long int sum = 0;
        for(int i=1;i<=N;i++)
        {
            sum += solve(i,1);
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends