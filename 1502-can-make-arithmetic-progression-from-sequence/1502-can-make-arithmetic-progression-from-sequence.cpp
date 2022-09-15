class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        int i;
        int k = arr[1] - arr[0];
        int n = arr.size();
        for(i=0;i<n-1;i++)
        {
            if(arr[i+1] - arr[i] != k)
            {
                return false;
            }
        }
        return true;
    }
};