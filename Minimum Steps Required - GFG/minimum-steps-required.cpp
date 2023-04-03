//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    
    int count1 = 0;
    int n = str.size();
    stack<char>st;
    char x = str[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(str[i] == x)
        {
            st.push(str[i]);
        }
        else
        {
            while(i < n && str[i] != x)
            {
                i++;
            }
            count1++;
        }
    }
    if(st.size() != 0)
    {
        count1++;
    }
    return count1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends