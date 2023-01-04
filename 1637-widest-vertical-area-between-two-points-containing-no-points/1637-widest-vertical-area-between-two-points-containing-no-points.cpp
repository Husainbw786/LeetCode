class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        
        sort(points.begin(),points.end());
        int i;
        int n = points.size();
        int maxi = INT_MIN;
        for(i=0;i<n-1;i++)
        {
            int diff = points[i+1][0] - points[i][0];
            maxi = max(maxi,diff);
        }
        return maxi;
    }
};