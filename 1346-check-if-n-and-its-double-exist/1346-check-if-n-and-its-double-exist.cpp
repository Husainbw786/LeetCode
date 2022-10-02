class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>mp;
        int i;
        int n = arr.size();
        for(i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                
     if(mp.find(arr[j]) != mp.end() && mp.find(2*arr[j]) != mp.end() && arr[j] != 0)
                {
                   
                    return true;
                }
                if(arr[j] == 0)
                {
                   if(mp[arr[j]] >= 2)
                  {
                      return true;
                  }
                }
                
            }
        }
        return false;
            
        
    }
};