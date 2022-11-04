//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int isPossible (string s)
{
    // your code here
    unordered_map<char,int>mp;
    int i;
    for(i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    bool flag = false;
    for(auto x : mp)
    {
        if( x.second % 2 == 0)
        {
            continue;
        }
        else if(!flag)
        {
            flag = true;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}