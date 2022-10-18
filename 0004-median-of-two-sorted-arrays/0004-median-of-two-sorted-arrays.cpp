class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>v;
        int i;
        int n = nums1.size();
        int m = nums2.size();
        for(i=0;i<n;i++)
        {
            v.push_back(nums1[i]);
        }
        for(i=0;i<m;i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        n = v.size();
        if(n % 2 != 0)
        {
            return v[n/2];
        }
        int p = n/2;
        double x = (float)(v[p - 1] + v[p]) / 2;
        return x;
    }
};