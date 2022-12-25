class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        int mini = INT_MAX;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int i,j;
        for(i=0;i<n-1;i++)
        {
            int diff = arr[i+1] - arr[i];
            mini = min(mini,diff);
        }
        for(i=0;i<n-1;i++)
        {
            vector<int>temp;
            if(arr[i+1] - arr[i] == mini)
                {
                    temp.push_back(arr[i]);
                    temp.push_back(arr[i+1]);
                }
            if(temp.size() == 0)
            {
                continue;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};