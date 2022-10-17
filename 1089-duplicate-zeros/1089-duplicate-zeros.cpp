class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int n = arr.size();
        int i;
        for(i=0;i<n;i++)
        {
            if(arr[i] == 0)
            {
                int idx = n-1;
                while(idx > i)
                {
                    arr[idx] = arr[idx-1];
                    idx--;
                }
                i++;
            }
            
        }
    }
};