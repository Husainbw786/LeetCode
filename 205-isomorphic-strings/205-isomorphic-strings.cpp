class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int count_arr1[256] = {0};
        int count_arr2[256] = {0};
        int i;
        int n = s.size();
        for(i=0;i<n;i++)
        {
            if(! count_arr1[s[i]] &&  !count_arr2[t[i]])
            {
            count_arr1[s[i]] = t[i];
            count_arr2[t[i]] = s[i];
            }
            else
            {
                if(count_arr1[s[i]] != t[i])
                {
                    return false;
                }
            }
            
        }
       return true;
    }
};