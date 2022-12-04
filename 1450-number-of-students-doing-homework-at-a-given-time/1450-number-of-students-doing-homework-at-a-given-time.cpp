class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        
        int count = 0;
        int i;
        int n = startTime.size();
        for(i=0;i<n;i++)
        {
            int x = startTime[i];
            int y = endTime[i];
            if( x <= queryTime && y >= queryTime)
            {
                count++;
            }
        }
        return count;
    }
};