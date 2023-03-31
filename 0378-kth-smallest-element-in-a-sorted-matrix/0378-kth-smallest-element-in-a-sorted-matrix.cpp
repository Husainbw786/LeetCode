class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        priority_queue<int ,vector<int>,greater<int>>pq;
        int i,j;
        int n = matrix.size();
        int m = matrix[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                pq.push(matrix[i][j]);
            }
        }
        int top = 0;
        while(k--)
        {
            top = pq.top();
            pq.pop();
        }
        return top;
        
          
    }
};