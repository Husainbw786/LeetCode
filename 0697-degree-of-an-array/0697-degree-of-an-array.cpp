class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>first,second,count;
        int n = nums.size();
        int i;
        for(i=0;i<n;i++)
        {
            if(first.count(nums[i]) == 0)
            {
                first[nums[i]] = i;
            }
            second[nums[i]] = i;
            count[nums[i]]++;
        }
        int maxi = 0;
        int ans = n;
        for(auto x : count)
        {
            if(x.second > maxi)
            {
                maxi = x.second;
            }
        }
        for(auto x : count)
        {
            if(x.second == maxi)
            {
               ans = min(ans, second[x.first] - first[x.first] + 1); 
            }
        }
        return ans;
    }
};