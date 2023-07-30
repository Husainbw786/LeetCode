class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        int n = heights.size();
        int m = heights[0].size();
        int i;
        vector<vector<int>>dis(n,vector<int>(m,1e9));
        dis[0][0] = 0;
        priority_queue<pair<int,pair<int,int>>, 
        vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>>pq;
        pq.push({0,{0,0}});
        // distance , {row,col}
        int dr[] = {1,-1,0,0};
        int dc[] = {0,0,1,-1};
        
        while(!pq.empty())
        {
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            int distance = pq.top().first;
            pq.pop();
            if(row == n-1 && col == m-1)
            {
                return dis[n-1][m-1];
            }
            
            for(int i=0;i<4;i++)
            {
                int newr = dr[i] + row;
                int newc = dc[i] + col;
                if(newr < n && newc < m && newr >= 0 && newc >= 0)
                {
                    int newEffort = max(abs(heights[row][col] - heights[newr][newc]),distance);
                    if(newEffort < dis[newr][newc])
                    {
                        dis[newr][newc] = newEffort;
                        pq.push({newEffort,{newr,newc}});
                    }
                }
            }
        }
        return -1;
        
    }
};