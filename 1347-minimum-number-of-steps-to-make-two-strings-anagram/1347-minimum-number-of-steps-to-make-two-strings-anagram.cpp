class Solution {
public:
    int minSteps(string s, string t) {
        
        int count_arr1[26] = {0};
        int count_arr2[26] = {0};
        int i;
        int n = s.size();
        for(i=0;i<n;i++)
        {
            count_arr1[s[i] - 'a']++;
            count_arr2[t[i] - 'a']++;
        }
        int count = 0;
        for(i=0;i<26;i++)
        {
            if(count_arr1[i] == 0)
            {
                continue;
            }
            if(count_arr1[i] != 0 && count_arr1[i] > count_arr2[i])
            {
                count += count_arr1[i] - count_arr2[i];
            }
            
        }
        return count;
    }
};