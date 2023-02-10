class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
       unordered_map<int,int>mp;
       int i,j;
        for(i=0;i<nums3.size();i++)
        {
            for(j=0;j<nums4.size();j++)
            {
                int x = nums3[i] + nums4[j];
                mp[x]++;
            }
        }
        int sum = 0;
        int count = 0;
        for(i=0;i<nums1.size();i++)
        {
            for(j=0;j<nums2.size();j++)
            {
                int x = 0 - (nums1[i]+ nums2[j]);
                count += mp[x];
            }
        }
         return count;
    }
};