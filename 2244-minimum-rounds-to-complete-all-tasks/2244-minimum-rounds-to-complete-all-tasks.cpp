class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        unordered_map<int,int>mp;
        int n = tasks.size();
        int i;
        int count = 0;
        for(i=0;i<n;i++)
        {
            mp[tasks[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(mp[tasks[i]] == 4)
            {
                count += 2;
                mp[tasks[i]] = 0;
            }
            else if(mp[tasks[i]] >= 3)
            {
               mp[tasks[i]] -= 3;
               count++;
            }
            else if(mp[tasks[i]] == 2)
            {
                mp[tasks[i]] -= 2;
                count++;
            }
            else if( mp[tasks[i]] == 1)
            {
                return -1;
            }
        }
       return count; 
    }
};