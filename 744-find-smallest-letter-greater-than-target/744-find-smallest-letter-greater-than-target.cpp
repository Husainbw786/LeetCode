class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int n = letters.size();
        int high = n-1;
        int low = 0;
        char ans;
        if(letters[high] == target || letters[high] < target)
        {
            return letters[low];
        }
        while(low <= high)
        {
            int  mid  = low + (high - low)/2;
            if(letters[mid] == target && letters[mid+1] != target)
            {
                return letters[mid+1];
            }
            else if(letters[mid] > target)
            {
                high = mid - 1;
                ans = letters[mid];
            }
            else 
            {
                low = mid + 1;
            }
        }
        return ans;
        
    }
};