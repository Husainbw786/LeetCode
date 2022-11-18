//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        // Write Your Code here
        vector<bool>v(n+1,true);
        v[0] = false;
        v[1] = false;
        int i,j;
        for(i=2;i*i<=n;i++)
        {
            if(!v[i])
            {
                continue;
            }
            for(j=i*i;j<=n;j+=i)
            {
                v[j] = false;
            }
        }
        vector<int>ans;
        for(i=0;i<=n;i++)
        {
            if(v[i])
            {
                ans.push_back(i);
            }
        }
        return ans;
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
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends