//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        
    int n = s.size();
    unordered_map<char,int>mp;
    int i;
    for(i=0;i<n;i++)
    {
        mp[s[i]]++;  
    }
    string x = "balloon";
    int count = 0;
    while(true)
    {
        bool flag = true;
        for(i=0;i<x.size();i++)
        {
            if(mp.find(x[i]) != mp.end() && mp[x[i]] > 0)
            {
                mp[x[i]]--;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if(!flag)
        {
            break;
        }
        else
        {
           count++;
        }
    }
    return count;
     }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends