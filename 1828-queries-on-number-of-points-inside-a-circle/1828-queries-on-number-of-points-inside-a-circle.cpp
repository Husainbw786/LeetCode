class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        int n = points.size();
        int i;
        vector<int>ans;
        map<vector<int>,int>mp;
        for(i=0;i<n;i++)
        {
            mp[points[i]]++;
        }
        for(i=0;i<queries.size();i++)
        {
            int x1 = queries[i][0];
            int y1 = queries[i][1];
            double r = queries[i][2];
            int count = 0;
            for(auto it : mp)
            {
                int x2 = it.first[0];
                int y2 = it.first[1];
                double dis = sqrt( ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) );
                if(dis <= r)
                {
                    count += it.second;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};