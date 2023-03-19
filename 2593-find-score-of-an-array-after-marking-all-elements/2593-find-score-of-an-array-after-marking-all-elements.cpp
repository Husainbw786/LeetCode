class Solution {
public:
    typedef pair<int, int> PI;
    long long findScore(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>visited(n,0);
        priority_queue<PI, vector<PI>, greater<PI>> pq;
        int i;
       long long int sum = 0;
        for(i=0;i<n;i++)
        {
            pq.push({nums[i],i});
        }
        while(!pq.empty())
        {
            int top = pq.top().first;
            int idx = pq.top().second;
            pq.pop();
            if(visited[idx] == 0)
            {
                sum += top;
            }
            else
            {
                continue;
            }
            if(idx > 0)
            {
                visited[idx-1] = 1;
            }
            if(idx < n-1)
            {
                visited[idx+1] = 1;
            }
        }
        return sum;
    }
};