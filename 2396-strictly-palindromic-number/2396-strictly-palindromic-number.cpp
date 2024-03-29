class Solution {
public:
    bool isStrictlyPalindromic(int n) 
    {
        vector<int>arr;
        int temp, j;
        for(int i = 2; i < n-1; i++)
        {
            temp = n;
            while(temp)
            {
                arr.push_back(temp % i);
                temp = temp / i;
            }
            int x = 0;
            j = arr.size();
            while(x < j)
            {
                if(arr[x] != arr[j-x-1])
                    return false;
                x++;
            }
            arr.clear();
        }
        return true;
    }
};