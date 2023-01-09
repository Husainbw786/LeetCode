class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
    
        int n = costs.size();
        priority_queue<pair<int,int>>pq;
        int i;
        for(i=0;i<n;i++)
        {
            int diff = costs[i][0] - costs[i][1];
            pq.push({diff,i});
        }
        int j = 0;
        int cost_A = 0;
        int cost_B = 0;
        while(j != n/2)
        {
            int idx = pq.top().second;
            cost_A += costs[idx][1];
            pq.pop();
            j++;
        }
        while(!pq.empty())
        {
            int idx = pq.top().second;
            cost_B += costs[idx][0];
            pq.pop();
        }
        return cost_A + cost_B;
    }
};