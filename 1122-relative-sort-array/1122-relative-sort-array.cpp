class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        unordered_map<int,int>mp;
        unordered_map<int,int>mp2;
        int i;
        vector<int>ans;
        int n = arr1.size();
        int m = arr2.size();
        for(i=0;i<n;i++)
        {
            mp[arr1[i]]++;
        }
        for(i=0;i<m;i++)
        {
            mp2[arr2[i]]++;
        }
        for(i=0;i<m;i++)
        {
            if(mp.find(arr2[i]) != mp.end())
            {
                int count = mp[arr2[i]];
                while(count--)
                {
                    ans.push_back(arr2[i]);
                }
            }
        }
        vector<int>temp;
        for(i=0;i<n;i++)
        {
          if(mp2.find(arr1[i]) != mp2.end())
          {
              continue;
          }
          else
          {
            temp.push_back(arr1[i]);
          }
        }
        sort(temp.begin(),temp.end());
        for(auto x : temp)
        {
            ans.push_back(x);
        }
        return ans;
    }
};