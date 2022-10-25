class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        unordered_map<int,int>mp;
        int n = arr.size();
        int i;
        for(i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int sum = 0;
        priority_queue<pair<int,int>>pq;
        for(auto x : mp)
        {
            pq.push({x.second,x.first});
            sum += x.second;
        }
        int count = 0;
        int k = sum / 2;
        while(!pq.empty())
        {
            count++;
            int temp = pq.top().first;
            k = k - temp;
            pq.pop();
            if(k <= 0)
            {
                break;
            }
        }
        return count;
    }
};