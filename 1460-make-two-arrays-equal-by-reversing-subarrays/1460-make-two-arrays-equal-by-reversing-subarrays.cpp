class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        sort(target.begin(),target.end());
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i] != target[i])
            {
                return false;
            }
        }
        return true;
    }
};