class Solution {
public:
    bool checkIfPangram(string sentence) {
        int count_arr[26] = {0};
        int i;
        int n = sentence.size();
        for(i=0;i<n;i++)
        {
            count_arr[sentence[i] - 'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(count_arr[i] == 0)
            {
                return false;
            }
        }
        return true;
          
    }
};