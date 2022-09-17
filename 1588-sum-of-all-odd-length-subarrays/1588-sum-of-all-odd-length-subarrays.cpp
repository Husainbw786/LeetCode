class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int i;
        int  sum = 0;
        int res = 0;
        int n = arr.size();
        for(i=0;i<n;i++)
        {
            sum = arr[i];
            int len = 1;
            res += sum;
            
            for(int j=i+1;j<n;j++)
            {
                sum += arr[j];
               if( (j-i+1) % 2 == 1)
               {
                   res +=  sum; 
               }
            }
        }
        return res;
    }
};