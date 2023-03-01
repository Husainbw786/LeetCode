class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        int n = intervals.size();
        int i;
        int j = 0;
        for(i=1;i<n;i++)
        {
            if(ans[j][1] >= intervals[i][0])
            {
                ans[j][1] = max(ans[j][1],intervals[i][1]);
            }
            else
            {
                j++;
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};