class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        string ans = "";
        int n = nums.size();
        int i;
        for(i=0;i<n;i++)
        {
            ans += to_string(nums[i]);
        }
        vector<int>v;
        string x = "";
        for(i=0;i<ans.size();i++)
        {
            x += ans[i];
            int y = stoi(x);
            v.push_back(y);
            x.pop_back();
        }
        return v;
    }
};