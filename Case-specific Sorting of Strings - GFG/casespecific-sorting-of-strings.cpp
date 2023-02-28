//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
    string small = "";
    string big = "";
    int i;
    for(i=0;i<n;i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            big += str[i];
        }
        else
        {
            small += str[i];
        }
    }
    sort(small.begin(),small.end());
    sort(big.begin(),big.end());
    int j = 0;
    int k = 0;
    string ans = "";
    for(i=0;i<n;i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            ans += big[j];
            j++;
        }
        else
        {
            ans += small[k];
            k++;
        }
    }
    return ans;
    
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends