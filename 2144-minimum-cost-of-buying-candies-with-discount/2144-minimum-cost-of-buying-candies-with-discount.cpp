class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        int n = cost.size();
        int i;
        priority_queue<int>pq;
        for(i=0;i<n;i++)
        {
            pq.push(cost[i]);
        }
        int sum = 0;
        int count = 0;
        while(!pq.empty())
        {
            if(count == 2)
            {
                pq.pop();
                count = 0;
                continue;
            }
            sum += pq.top();
            pq.pop();
            count++;
        }
        return sum;
    }
};