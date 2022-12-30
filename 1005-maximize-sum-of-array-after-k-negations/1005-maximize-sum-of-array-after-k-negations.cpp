class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        
        int n = nums.size();
        priority_queue<int, vector<int>, greater<int> >pq;
        int i;
        for(i=0;i<n;i++)
        {
            pq.push(nums[i]);
        }
        while(k--)
        {
            int top = pq.top();
            pq.pop();
            top = top * -1;
            pq.push(top);
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