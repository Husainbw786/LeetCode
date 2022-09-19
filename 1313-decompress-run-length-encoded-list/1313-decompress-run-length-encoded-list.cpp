class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
     
        int n = nums.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int freq = nums[i];
            int val = nums[i+1];
            i++;
            while(freq--)
            {
                v.push_back(val);
            }
        }
        return v;
    }
};