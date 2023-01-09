class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     
        int n = nums1.size();
        int m = nums2.size();
        int i;
        unordered_map<int,int>mp;
        for(i=0;i<n;i++)
        {
            int x = nums1[i];
            for(int j=0;j<m;j++)
            {
                if(nums2[j] == x)
                {
                    mp[nums1[i]] = j;
                    break;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            int start = mp[nums1[i]];
            int x = nums1[i];
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