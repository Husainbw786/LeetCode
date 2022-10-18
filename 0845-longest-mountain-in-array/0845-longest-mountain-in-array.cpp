class Solution {
public:
    int longestMountain(vector<int>& arr) {
     
        int i;
        int n = arr.size();
        int maxi = 0;
        for(i=1;i<=n-2;)
        {
            
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
            {
                int count = 1;
                int j = i;
                while(j > 0 && arr[j] > arr[j-1])
                {
                    j--;
                    count++;
                }
                while(i < n-1 && arr[i] > arr[i+1])
                {
                    i++;
                    count++;
                }
                maxi = max(count,maxi);
            }
            else
            {
                i++;
            }
           
        }   
        return maxi;
    }
};