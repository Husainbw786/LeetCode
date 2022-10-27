class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int i;
        int n = patterns.size();
        int count = 0;
        for(i=0;i<n;i++)
        {
            if(word.find(patterns[i]) == -1)
            {
                continue;
            }
            else
            {
                count++;
            }
        }
        return count;
    }
};