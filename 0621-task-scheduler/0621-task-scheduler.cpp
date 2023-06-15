class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        unordered_map<char, int> mp;
        int i;
        
        for (i = 0; i < tasks.size(); i++) {
            mp[tasks[i]]++;
        }
        
        int ans = 0;
        priority_queue<pair<int, char>> pq;
        
        for (auto x : mp) {
            pq.push({x.second, x.first});
        }
        
        while (!pq.empty()) {
            vector<pair<int, char>> temp;
            int k = n + 1;
            
            while (k > 0 && !pq.empty()) 
            {
                char x = pq.top().second;
                int count = pq.top().first;
                pq.pop();
                
                if (count > 1) {
                    temp.push_back({count - 1, x});
                }
                k--;
                ans++;
            }
            
            for (auto p : temp) {
                pq.push(p);
            }
            
            if (pq.empty()) {
                break;
            }
            
            ans += k; // Add idle slots if necessary
        }
        return ans;
        
    }
};