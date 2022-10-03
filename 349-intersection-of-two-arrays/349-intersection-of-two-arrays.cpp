class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        int i;
        vector<int>v;
        unordered_map<int,bool>mp;
        for(i=0;i<nums1.size();i++)
        {
            mp[nums1[i]] = true;; 
        }
        for(i=0;i<nums2.size();i++)
        {
            if(mp.find(nums2[i]) != mp.end() && mp[nums2[i]] == true)
            {
                v.push_back(nums2[i]);
                mp[nums2[i]] = false;
            }
        }
        return v;
    }
};