//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& it) {
         // Code here
         vector<vector<int>>ans;
         
         if(it.size() == 0)
         {
             return ans;
         }
         sort(it.begin(),it.end());
         ans.push_back(it[0]);
         int n = it.size();
         int j = 0,i;
         for(i=1;i<n;i++)
         {
             if(ans[j][1] >= it[i][0])
             {
                 ans[j][1] = max(ans[j][1],it[i][1]);
             }
             else
             {
                 j++;
                 ans.push_back(it[i]);
             }
         }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends