class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int n = arr.size();
        int i;
        int count = 0;
        i = 0;
        int j = 0;
        int avg = 0;
        while(j < n)
        {
            avg += arr[j];
            if(j-i+1 < k)
            {
                j++;
            }
            else if(j-i+1 == k)
            {
                if(avg / k >= threshold)
                {
                    count++;
                }
                avg = avg - arr[i];
                i++;
                j++;
            }
        }
        return count;
    }
};