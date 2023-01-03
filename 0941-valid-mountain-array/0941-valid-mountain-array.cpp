class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n = arr.size();
        if(n < 3)
        {
            return false;
        }
        int i;
        bool flag = false;
        bool check = false;
        for(i=0;i<n-1;i++)
        {
            if(arr[i] < arr[i+1] && !flag)
            {
                check = true;
                continue;
            }
            else if(arr[i] > arr[i+1] && !flag)
            {
                flag = true;
            }
            else if((arr[i] < arr[i+1] && flag) || arr[i] == arr[i+1] )
            {
                return false;
            }
            
        }
        if(!flag || !check)
        {
            return false;
        }
        return true;
    }
};