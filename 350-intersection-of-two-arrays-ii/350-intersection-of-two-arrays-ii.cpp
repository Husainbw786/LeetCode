class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
     
        vector<int>v;
        unordered_map<int,int>mp;
        int i;
        int n = nums1.size();
        for(i=0;i<n;i++)
        {
            mp[nums1[i]]++;
        }
        for(i=0;i<nums2.size();i++)
        {
            if(mp.find(nums2[i]) != mp.end() && mp[nums2[i]] > 0)
            {
                v.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
        }
        return v;
    }
};