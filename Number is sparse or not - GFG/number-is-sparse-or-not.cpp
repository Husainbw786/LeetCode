//{ Driver Code Starts
//Initial Template for C++

// C++ program to check if n is sparse or not
#include<iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to check if the number is sparse or not.

    bool isSparse(int n)
    {
        // Your code
        
        int count = 0;
        int prev = 0;
        bool flag = false;
        if(n == 1)
        {
            return true;
        }
        while(n)
        {
            if(n & 1)
            {
                 int diff = count - prev;
                 if(diff == 1 && flag)
                 {
                     return false;
                 }
                 flag = true;
                 prev = count;
            }
            n = n >> 1;
            count++;
        }
        return true;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t,n;
    
    //testcases
    cin>>t;
    while(t--)
    {
        //initializing n
        cin>>n;
        
        //printing 1 if isSparse() returns true
        //else 0
        Solution ob;
        if(ob.isSparse(n)){
            cout << "1" << endl;
        }
        else cout << "0" << endl;
        
    }
    return 0;
}

// } Driver Code Ends