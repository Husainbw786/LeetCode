class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        unordered_map<int,int>mp;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int ans = 0;
        for(auto x : mp)
        {
            int count = x.second;
            if(count == 1)
            {
                return -1;
            }
            if(count == 4)
            {
                ans += 2;
                continue;
            }
            while(count >= 3)
            {
                if(count % 3 == 0)
                {
                    ans += count/3;
                    count = 1;
                    break;
                }
                if(count - 3 >= 2)
                {
                    count = count - 3;
                    ans++;
                   
                }
                else
                {
                    break;
                }
            }
            while(count >= 2)
            {
                if(count % 2 == 0)
                {
                    ans += count/2;
                    break;
                }
                else
                {
                    return -1;
                }
            }
            
        }
       // cout << ans << " ";
        return ans;
        
     }
};