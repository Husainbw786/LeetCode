class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<double,vector<int>>>max;
        int i;
        int n = points.size();
        for(i=0;i<n;i++)
        {
            max.push({ sqrt((points[i][0] * points[i][0]) + (points[i][1] * points[i][1])), points[i] });
          
             if(max.size() > k)
             {
                 max.pop();
             }
        }
        vector<vector<int>>ans;
        while(max.size() > 0)
        {
            ans.push_back(max.top().second);
            max.pop();
        }
        return ans;
    }
};

