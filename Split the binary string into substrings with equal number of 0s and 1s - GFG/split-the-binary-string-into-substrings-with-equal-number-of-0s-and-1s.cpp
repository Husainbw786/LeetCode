//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int n = str.size();
        int count = 0;
        int ans = 0;
        int i;
        for(i=0;i<n;i++)
        {
            if(str[i] == '0')
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count == 0)
            {
                ans++;
            }
        }
        if(count != 0)
        {
            return -1;
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
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends