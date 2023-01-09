class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     
        int n = nums1.size();
        int m = nums2.size();
        int i;
        unordered_map<int,int>mp;
        for(i=0;i<m;i++)
        {
            mp[nums2[i]] = i;
        }
        for(i=0;i<n;i++)
        {
            int x = nums1[i];
            int start = mp[x];
            bool flag = false;
            for(int j=start+1;j<m;j++)
            {
                if(nums2[j] > x)
                {
                    nums1[i] = nums2[j];
                    flag = true;
                    break;
                }
            }
           if(!flag)
           {
               nums1[i] = -1;
           }
        }
        return nums1;
    }
};