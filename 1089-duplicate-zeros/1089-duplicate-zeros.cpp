class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
      vector<int>v;
      int i;
      int n = arr.size();
        for(i=0;i<n;i++)
        {
            if(v.size() == n)
            {
                break;
            }
            if(arr[i] == 0)
            {
                v.push_back(arr[i]);
                v.push_back(arr[i]);
                continue;
            }
            v.push_back(arr[i]);
        }
        for(i=0;i<n;i++)
        {
            arr[i] = v[i];
        }
    }
};