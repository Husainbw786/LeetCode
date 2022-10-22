class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        unordered_map<int,int>mp3;
        int i;
        int n = nums1.size();
        for(i=0;i<n;i++)
        {
            mp1[nums1[i]]++;
        }
        set<int>st;
        n = nums2.size();
        for(i=0;i<n;i++)
        {
            mp2[nums2[i]]++;
        }
        n = nums3.size();
        for(i=0;i<n;i++)
        {
            mp3[nums3[i]]++;
        }
        n = nums1.size();
        for(i=0;i<n;i++)
        {
            if(mp2.find(nums1[i]) != mp2.end() || mp3.find(nums1[i]) != mp3.end() )
            {
                st.insert(nums1[i]);
            }
        }
        n = nums2.size();
        for(i=0;i<n;i++)
        {
            if(mp1.find(nums2[i]) != mp2.end() || mp3.find(nums2[i]) != mp3.end() )
            {
                st.insert(nums2[i]);
            }
        }
        n = nums3.size();
        for(i=0;i<n;i++)
        {
            if(mp2.find(nums3[i]) != mp2.end() || mp1.find(nums3[i]) != mp1.end() )
            {
                st.insert(nums3[i]);
            }
        }
        vector<int>v;
        for(auto x : st)
        {
            v.push_back(x);
        }
        return v;
    }
};