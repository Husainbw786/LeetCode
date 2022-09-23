class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     
        unordered_map<int,int>mp;
        int len1 = nums1.size();
        int len2 = nums2.size();
        int i;
        vector<int>ans(len1,-1);
        for(i=0;i<len2;i++)
        {
            mp[nums2[i]] = i;
        }
        for(i=0;i<len1;i++)
        {
            int x = nums1[i];
            int index = mp[x];
            for(int j=index;j<len2;j++)
            {
                if(nums1[i] < nums2[j])
                {
                    ans[i] = nums2[j];
                    break;
                }
            }
        }
        return ans;
    }
};