class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        
         long long int good = 0;
         long long int n = nums.size();
         unordered_map<int,int>mp;
         int i;
        
         for(i=0;i<n;i++)
         {
            int curr = nums[i] - i;
            good  = good + mp[curr];
            mp[curr]++;
         }
          
        long long total = n*(n-1) /2;
        
        return total - good; 
        
    }
};

    