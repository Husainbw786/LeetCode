class Solution {
public:
    long long maxSpending(vector<vector<int>>& values) {
        
        
        int n = values.size();
        int m = values[0].size();
        int i,j;
        
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        
        for(i=0;i<n;i++)
        {
            pq.push({values[i][m-1],{i,m-1}});
        }
        long long int count = 1;
        long long int ans = 0;
        while(!pq.empty())
        {
            long long int x = pq.top().first;
            ans += count * x;
            int a = pq.top().second.first;
            int b = pq.top().second.second;
            pq.pop();
            count++;
            b--;
            if(b >= 0)
            {
                
                pq.push({values[a][b],{a,b}});
            }
        }
        return ans;
    
    }
};