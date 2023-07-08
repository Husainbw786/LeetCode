//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    
    void Solve(string temp,int oc,int cc ,int n ,vector<string>&v)
    {
        if(oc == n && cc == n)
        {
            v.push_back(temp);
            return;
        }
        if(oc < n)
        {
            Solve(temp+"(", oc+1,cc,n,v);
        }
        if(cc < oc)
        {
            Solve(temp+")",oc,cc+1,n,v);
        }
    }
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>v;
        int open_c = 0;
        int close_c = 0;
        Solve("",open_c,close_c,n,v);
        return v;
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
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends