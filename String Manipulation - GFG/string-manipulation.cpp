//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int removeConsecutiveSame(vector <string > v) 
    {
        // Your code goes here
        stack<string>st;
        int n = v.size();
        int i;
        for(i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(v[i]);
            }
            else
            {
                if(st.top() == v[i])
                {
                    st.pop();
                }
                else
                {
                    st.push(v[i]);
                }
            }
        }
        return st.size();
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
         string s;
         vector<string> v;
         for(int i=0;i<n;i++)
         {
             cin>>s;
             v.push_back(s);
         }
         Solution ob;
         cout<< ob.removeConsecutiveSame(v) <<endl;
     }
	
	
	
	
	return 0;
}
// } Driver Code Ends