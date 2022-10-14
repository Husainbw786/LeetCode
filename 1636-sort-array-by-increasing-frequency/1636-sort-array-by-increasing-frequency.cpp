class Solution {
public:
    
    bool static comp(pair<int,int> a,pair<int,int> b)
    {
        if(a.second==b.second)
        return a>b;   
        else
        return a.second<b.second;
    }
    
    
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int n = nums.size();
        int i;
        for(i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto x : mp)
        {
            v.push_back(x);
        }
        sort(v.begin(),v.end(),comp);
        vector<int>ans;
        for(i=0;i<v.size();i++)
        {
            int count = v[i].second;
            while(count--)
            {
                ans.push_back(v[i].first);
            }
        }
        return ans;
    }
};