class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        unordered_map<int,int>mp;
        int i;
        for(i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        for(i=0;i<nums2.size();i++)
        {
            if(mp.find(nums2[i]) != mp.end())
            {
                return nums2[i];
            }
        }
        int ans = 0;
        if(nums1[0] > nums2[0])
        {
            ans = nums2[0];
            ans = ans * 10 + nums1[0];
        }
        else
        {
            ans = nums1[0];
            ans = ans * 10 + nums2[0];
        }
        
        return ans;
    }
};