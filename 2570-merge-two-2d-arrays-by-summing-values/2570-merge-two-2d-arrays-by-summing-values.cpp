class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        vector<vector<int>>v;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i,j;
        map<int,int>mp;
        for(i=0;i<n1;i++)
        {
            mp[nums1[i][0]] = nums1[i][1];
        }
        for(i=0;i<n2;i++)
        {
            if(mp.find(nums2[i][0]) != mp.end())
            {
                mp[nums2[i][0]] += nums2[i][1];
            }
            else
            {
                mp[nums2[i][0]] = nums2[i][1];
            }
        }
        for(auto x : mp)
        {
            vector<int>temp;
            temp.push_back(x.first);
            temp.push_back(x.second);
            v.push_back(temp);
        }
        return v;
    }
};