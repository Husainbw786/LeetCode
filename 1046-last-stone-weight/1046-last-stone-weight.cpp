class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
     
        priority_queue<int>pq;
        int i;
        int n = stones.size();
        for(i=0;i<n;i++)
        {
            pq.push(stones[i]);
        }
        int y = 0;
        while(!pq.empty()) 
        {
            if(pq.size() == 1)
            {
                y = pq.top();
                break;
            }
            y = pq.top();
            pq.pop();
            int x = pq.top();
            pq.pop();
            if(x == y)
            {
                continue;
            }
            else
            {
                y = y-x;
                pq.push(y);
            } 
           
        }
        if(pq.empty())
        {
            return 0;
        }
        return y;
    }
};




    
    
    
    
    
