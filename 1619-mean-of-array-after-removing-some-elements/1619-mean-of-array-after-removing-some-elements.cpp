class Solution {
public:
    double trimMean(vector<int>& arr) {
        
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int i;
        int x = (n*5)/100;
        vector<int>v;
        double sum = 0;
        for(i=x;i<n-x;i++)
        {
            v.push_back(arr[i]);
            sum += arr[i];
        }
        n = v.size();
        double ans = sum / n; 
        return ans;
    }
};