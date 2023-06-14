//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
        
        int ans = 0;
        int n = s.size();
        for(int i=0; i<n; i++) 
        {
            int cnt[26] = {};
            int max_f = INT_MIN;
            int min_f = INT_MAX;
            for(int j=i; j<n; j++) 
            {
                int ind = s[j] - 'a';
                cnt[ind]++;
				max_f = max(max_f, cnt[ind]);
				min_f = cnt[ind];
				for(int k=0; k<26; k++) 
				{
					if(cnt[k] >= 1)
					{
					    min_f = min(min_f, cnt[k]);
					}
                }
                ans += (max_f - min_f);
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends