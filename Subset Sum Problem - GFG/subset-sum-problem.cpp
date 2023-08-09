//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    
    bool solve(int idx, vector<int>arr, int target, vector<vector<int>>&dp)
    {
        if(target == 0)
        {
            return true;
        }
        if(idx == 0)
        {
            if(arr[idx] == target)
            {
                return true;
            }
            return false;
        }
        if(dp[idx][target] != -1)
        {
            return dp[idx][target];
        }
        bool not_take = solve(idx-1,arr,target,dp);
        bool take = false;
        if(arr[idx] <= target)
        {
            take = solve(idx-1,arr,target-arr[idx],dp);
        }
        return dp[idx][target] = take | not_take;
    }


    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        vector<vector<bool>>dp(n,vector<bool>(sum+1,0));
     //   return solve(n-1,arr,sum,dp);
      int i,j;
      for(i=0;i<n;i++)
      {
          dp[i][0] = true;
      }
      dp[0][arr[0]] = true;
    
      for(i=1;i<n;i++)
      {
          for(j=0;j<=sum;j++)
          {
            bool not_take = dp[i-1][j];
            bool take = false;
            if(arr[i] <= j)
            {
                take = dp[i-1][j - arr[i]];
            }
            dp[i][j] = take | not_take; 
          }
      }
    
     return dp[n-1][sum];
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends