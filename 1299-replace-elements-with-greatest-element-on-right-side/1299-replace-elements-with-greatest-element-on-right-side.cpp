class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        int i;
        int maxi = -1;
        for(i=n-1;i>=0;i--)
        {
            int temp = max(maxi,arr[i]);
            arr[i]= maxi;
            maxi=temp;
        }
      return arr;
    }
};