class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
     
        int n = nums1.size();
        int m = nums2.size();
        
        unordered_map<int,int>mp;
        int i;
        for(i=0;i<m;i++)
        {
            mp[nums2[i]]++;
        }
        int count1 = 0;
        for(i=0;i<n;i++)
        {
            if(mp.find(nums1[i]) != mp.end())
            {
                count1 += mp[nums1[i]];
                mp[nums1[i]] = 0;
            }
        }
        int count2 = 0;
        mp.clear();
        for(i=0;i<n;i++)
        {
            mp[nums1[i]]++;
        }
        for(i=0;i<m;i++)
        {
            if(mp.find(nums2[i]) != mp.end())
            {
                count2 += mp[nums2[i]];
                mp[nums2[i]] = 0;
            }
        }
        return {count2,count1};
        
    }
};