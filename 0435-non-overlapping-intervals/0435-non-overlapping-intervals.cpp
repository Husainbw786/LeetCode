class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
      //  1 2. 1 3.  2 3  2 4
        
        
        sort(intervals.begin(),intervals.end());
        int i;
        int count = 0;
        int n = intervals.size();
        int start = intervals[0][0];
        int end = intervals[0][1];
        for(i=1;i<n;i++)
        {
            if(end > intervals[i][0])
            {
                count++;
                end = min(end,intervals[i][1]);
            }
            else
            {
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        return count;
        
    }
};