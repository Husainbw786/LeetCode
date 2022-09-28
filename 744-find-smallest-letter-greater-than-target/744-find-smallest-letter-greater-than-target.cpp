class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int n = letters.size();
        int high = n-1;
        int low = 0;
        char ans = ' ';
        while(low <= high)
        {
            int  mid  = low + (high - low)/2;
            if(letters[mid] > target)
            {
                ans = letters[mid];
                high = mid - 1;
            }
            else 
            {
                low = mid + 1;
            }
        }
        if(ans==' ')
        {
            return letters[0];
        }
        return ans;
        
    }
};