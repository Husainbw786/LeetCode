//{ Driver Code Starts
#include <bits/stdc++.h>


using namespace std;




// } Driver Code Ends

class Solution{
  public:
    int Countpair(int nums[], int n, int sum){
        
        // Complete the function
        int i = 0;
        int j = n-1;
        int count = 0;
        while(i < j)
        {
            if(nums[i] + nums[j] == sum)
            {
                count++;
                i++;
                j--;
            }
            else if(nums[i] + nums[j] < sum)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        if(count == 0)
        {
            return -1;
        }
     return count;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}

// } Driver Code Ends