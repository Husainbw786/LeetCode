class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>>ans;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        int i;
        int n = nums1.size();
        int m = nums2.size();
        for(i=0;i<n;i++)
        {
            mp1[nums1[i]]++;
        }
        for(i=0;i<m;i++)
        {
            mp2[nums2[i]]++;
        }
        vector<int>temp;
         for(auto x : mp1)
        {
            if(mp2.find(x.first) == mp2.end())
            {
                temp.push_back(x.first);
            }
        }
        ans.push_back(temp);
        temp.clear();
        
        for(auto x : mp2)
        {
            if(mp1.find(x.first) == mp1.end())
            {
                temp.push_back(x.first);
            }
        }
        ans.push_back(temp);
        
       
        return ans;
    }
};