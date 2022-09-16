class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int i;
        int n = coordinates.size();
        int x0 = coordinates[0][0], y0 = coordinates[0][1];
        int dx = coordinates[1][0] - x0, dy = coordinates[1][1] - y0;
        for(i=0;i<n;i++)
        {
             int x = coordinates[i][0], y = coordinates[i][1];
             if (dx * (y - y0) != dy * (x - x0))
             {
                 return false;
             }
        }
        return true;
    }
};