//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
        // Code here
        vector<int>ans;
        unordered_map<int,int>mp;
        unordered_map<int,bool>mp1;
        int i;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
            mp1[nums[i]] = false;
        }
        for(i=0;i<n;i++)
        {
            if(mp[nums[i]] > n/3 && mp1[nums[i]] == false)
            {
                ans.push_back(nums[i]);
                mp1[nums[i]] = true;
            }
        }
        if(ans.size() == 0)
        {
            ans.push_back(-1);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends