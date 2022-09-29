class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int index = 0;
        int i = 0;
        while(i < arr.size() && (arr[index] - (index+1)) < k)
        {
            index = i+1;
            i++;
        }
        return k+index;
    }
};