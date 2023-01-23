//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int countWords(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<countWords(s)<<endl;
	    }
}
// } Driver Code Ends


//User function Template for C+
//User function Template for C++

int countWords(string s)
{
    //code here.
    int n = s.size();
    int i;
    vector<string>v;
    string temp ="";
    for(i=0;i<n;i++)
    {
        if(s[i] == ' ')
        {
            if(temp.size() != 0)
            {
              v.push_back(temp);  
            }
            temp = "";
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
           temp += s[i];
        }
        else
        {
            if(temp.size() != 0)
            {
              v.push_back(temp);  
            }
            
            temp = "";
            i++;
        }
        
    }
    if(temp.size() != 0)
        {
            v.push_back(temp);
        }
    return v.size();
}