class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
     
        priority_queue<long long int>pq;
        int n = gifts.size();
        int i;
        for(i=0;i<n;i++)
        {
            pq.push(gifts[i]);
        }
        while(k--)
        {
            long long int x = pq.top();
            pq.pop();
            x = sqrt(x);
            pq.push(x);
        }
        long long int ans = 0;
        while(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
           
        }
         return ans;
    }
};