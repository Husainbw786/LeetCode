class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
       map<int,int>mp;
       int i;
       int n = arr.size();
        int count =0 ;
       vector<pair<int,int>>v;
       for(i=0;i<n;i++)
       {
           mp[arr[i]]++;     
       }
       for(auto x : mp)
       {
           v.push_back({x.second,x.first});
       }
       sort(v.begin(),v.end());

      
        for(i=0;i<v.size();i++)
        {
            int x = v[i].first;
            k -= x;
            if(k < 0)
            {
                break;
            }
            count++;
        }
        return mp.size()-count;
        

    }
};