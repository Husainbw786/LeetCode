class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
     
      
        int n = points.size();
        int i;
        int min = INT_MAX;
        int distance = -1;
        for(i=0;i<n;i++)
            {
                if( points[i][0] == x || points[i][1] == y )
                {
                    int M_dis = abs(x - points[i][0]) + abs(y - points[i][1]);
                    if(min > M_dis) 
                    {
                       distance = i;
                       min = M_dis;
                     }
                 }
            }
        return distance;
    }
};