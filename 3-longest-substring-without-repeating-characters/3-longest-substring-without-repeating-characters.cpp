class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int>arr(256,-1);
        int len = s.size();
        int starting_point = 0;
        int longsubstr = 0;
        int i;
        for(i=0;i<len;i++)
        {
            if(arr[s[i]] >= starting_point)
            {
                starting_point = arr[s[i]] + 1;
            }
            longsubstr = max( ((i+1) - starting_point),longsubstr);
            arr[s[i]] = i;
        }
        return longsubstr;
    }
};