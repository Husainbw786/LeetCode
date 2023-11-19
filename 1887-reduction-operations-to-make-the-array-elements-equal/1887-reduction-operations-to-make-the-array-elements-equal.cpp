class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        int count = 0;    
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        int mini = INT_MAX;
        
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
            mini = min(nums[i],mini);
        }
        int x = mp.size()-1;
        for(i=n-1;i>0;i--)
        {
            if(nums[i] == mini)
            {
                break;
            }
            while(nums[i] == nums[i-1])
            {
                i--;
            }
            count += x * mp[nums[i]];
            x--;
        }
        return count;
    }
};



    