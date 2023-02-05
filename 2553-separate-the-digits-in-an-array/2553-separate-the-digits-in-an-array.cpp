class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        int n = nums.size();
        int i;
        vector<int>ans;
        for(i=0;i<n;i++)
        {
            vector<int>temp;
            int x = nums[i];
            while(x > 0)
            {
                int rem = x %10;
                temp.push_back(rem);
                x = x/10;
            }
            reverse(temp.begin(),temp.end());
            for(int j=0;j<temp.size();j++)
            {
                ans.push_back(temp[j]);
            }
        }
        return ans;
    }
};