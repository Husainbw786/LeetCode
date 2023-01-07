//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;



string maximumFrequency(string s);

int main()
{
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}

// } Driver Code Ends

string maximumFrequency(string s)
{
       int n= s.size();
       int i;
       string ans="";
       vector<string>v;
       string temp="";
       map<string,int>mp;
       
       for(i=0;i<n;i++)
       {
        if(s[i]==' ')
        {
            v.push_back(temp);
            temp.clear();
        }
        else
        {
            temp+=s[i];
        }
       }
      v.push_back(temp);
      int m=v.size();
      for(i=0;i<m;i++){
          mp[v[i]]++;
      }
      int max=0;
      for(i=0; i<m;i++){
          if( mp[v[i]] > max)
          {
              max=mp[v[i]];
              ans=v[i];
          }
      }
      ans+=" ";
      ans+=to_string(max);
       
      return ans;
       
}

