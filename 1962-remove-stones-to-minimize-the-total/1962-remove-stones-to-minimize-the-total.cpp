class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        priority_queue<int>pq;
        int n = piles.size();
        int i;
        for(i=0;i<n;i++)
        {
            pq.push(piles[i]);
        }
        while(k--)
        {
            int x = pq.top();
            pq.pop();
            if(x % 2 == 0)
            {
                x = x / 2;
            }
            else
            {
                x = x / 2;
                x++;
            }
            pq.push(x);
        }
        int sum = 0;
        while(!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};