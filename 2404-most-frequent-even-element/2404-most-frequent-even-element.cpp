class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i] % 2 == 0)
            {
                mp[nums[i]]++;
            }
        }
        priority_queue<pair<int,int>>pq;
        for(auto x : mp)
        {
            pq.push({x.second,x.first});
        }
        int mini = -1;
        while(!pq.empty())
        {
            int count1 = pq.top().first;
            int ans1 = pq.top().second;
            pq.pop();
            int count2 = pq.top().first;
            int ans2 = pq.top().second;
            if(count1 == count2)
            {
                mini = min(ans1,ans2);
            }
            else
            {
                mini = ans1;
                break;
            }
            
        }
        return mini;
    }
};