class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        int i;
        unordered_map<int,int>mp;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto x : mp)
        {
            pq.push({x.second,x.first});
        }
        vector<int>ans;
        while(!pq.empty())
        {
            if(k == 0)
            {
                break;
            }
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
        
    }
};