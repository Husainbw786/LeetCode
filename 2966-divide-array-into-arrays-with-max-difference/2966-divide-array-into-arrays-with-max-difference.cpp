class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        
       // 5 6 6 6  7 7 10 11 11 12 12 12 
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        
        int i;
        vector<int>temp;
        for(i=1;i<n;i++)
        {
            if(nums[i] - nums[i-1] > k && temp.size() < 2)
            {
                return {};
            }
            temp.push_back(nums[i-1]);
            if(temp.size() == 3)
            {
                if(temp[2] - temp[0] > k)
                {
                    return {};
                }
                v.push_back(temp);
                temp.clear();
            }
        }
        temp.push_back(nums[n-1]);
        if(temp[2] - temp[0] > k)
        {
            return {};
        }
        v.push_back(temp);
        return v;
            
            
    }
};