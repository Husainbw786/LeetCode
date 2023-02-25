class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        priority_queue<pair<int,int>>pq;
        int n = nums.size();
        int i;
        for(i=0;i<k;i++)
        {
            pq.push({nums[i],i});
        }
        vector<int>ans;
        ans.push_back(pq.top().first);
        
        for(i=k;i<n;i++)
        {
            pq.push({nums[i],i});
            while(!(pq.top().second > i-k))
            {
                pq.pop();
            }
            ans.push_back(pq.top().first);
        }
        return ans;
    }
};