class Solution {
public:
    int findTheWinner(int n, int k) {
     
        int i;
        int x = n;
        queue<int>q;
        int p = k-1;
        for(i=1;i<=x;i++)
        {
            q.push(i);
        }
        while(q.size() != 1)
        {
            p = k-1;
            while(p--)
            {
               int y = q.front();
                q.pop();
                q.push(y);
            }
            q.pop();

        }
        int top = q.front();
        q.pop();
        return top;
    }
};