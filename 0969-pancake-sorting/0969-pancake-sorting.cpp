class Solution {
public:
    
    int find(vector<int>& arr, int len)
    {
        int maxi = 0;
        int ans = 0;
        for(int i=0;i<len;i++)
        {
            if(maxi < arr[i])
            {
                maxi = arr[i];
                ans = i;
            }
        }
        return ans;
    }
    
    void flip(vector<int>& arr, int x)
    {
        int temp, start = 0;
        while(start <= x)
        {
            temp = arr[start];
            arr[start] = arr[x];
            arr[x] = temp;
            start++;
            x--;
        }
    }
    
    vector<int> pancakeSort(vector<int>& arr) {
        
        int n = arr.size();
        int i;
        int end = n;
        vector<int>ans;
        while(end != 1)
        {
            int idx = find(arr,end);
            flip(arr,idx);
            flip(arr,end - 1);
            ans.push_back(idx + 1);
            ans.push_back(end);
            end--;
        }
       return ans; 
    }
};