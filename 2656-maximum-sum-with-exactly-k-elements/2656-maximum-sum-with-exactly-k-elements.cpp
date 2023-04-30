class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        
        priority_queue<int>pq;
        int sum = 0;
        int n = nums.size();
        int i;
        for(i=0;i<n;i++)
        {
            pq.push(nums[i]);
        }
        while(!pq.empty() && k--)
        {
            int x = pq.top();
            sum += x;
            pq.pop();
            pq.push(x+1);
        }
        return sum;
        
    }
};