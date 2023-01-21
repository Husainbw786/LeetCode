// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
vector<int>ans;

    void solve(int i,vector<int>arr,int n,int sum)
    {
        if(i == n)
        {
            ans.push_back(sum);
            return;
        }
        solve(i+1,arr,n,sum+arr[i]);
        solve(i+1,arr,n,sum);
        
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int sum = 0;
        solve(0,arr,N,sum);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends