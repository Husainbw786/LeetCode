class Solution {
public:
    int fillCups(vector<int>& amount) {
        
        priority_queue<int>pq;
        int i;
        int n = amount.size();
        int count = 0;
        for(i=0;i<n;i++)
        {
            pq.push(amount[i]);
        }
        while(pq.top() != 0)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if(b == 0)
            {
                a--;
            }
            else
            {
                a--;
                b--;
            }
            pq.push(a);
            pq.push(b);
            count++;
        }
        return count;
    }
};