class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string>v;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            string ans = "";
            int x = nums[i];
            int y = nums[i];
            while(i+1 < n && x+1 == nums[i+1])
            {
                x++;
                i++;
            }
            if(x == y)
            {
                ans += to_string(y);
            }
            else
            {
              ans += to_string(y);
              ans += "->";
              ans += to_string(x);   
            }
            v.push_back(ans);
            
        }
        
        return v;
    }
};