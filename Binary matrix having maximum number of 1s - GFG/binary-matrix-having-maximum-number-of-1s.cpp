//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int n) {
        //code here
        int i,j;
        vector<int>ans;
        bool flag = true;
        for(i=0;i<n;i++)
        {
            
            for(j=0;j<n;j++)
            {
                if(mat[j][i] == 1)
                {
                    ans.push_back(j);
                    flag = false;
                    break;
                }
            }
            if(!flag)
            {
                break;
            }
        }
        if(flag)
        {
            ans.push_back(0);
            ans.push_back(0);
            return ans;
        }
        ans.push_back(n-i);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends