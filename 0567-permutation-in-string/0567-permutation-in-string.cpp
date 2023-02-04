class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s1.size() > s2.size())
        {
            return false;
        }
        int s1_len = s1.size();
        int s2_len = s2.size();
        vector<int>count_s1(26,0);
        vector<int>count_s2(26,0);
        int i;
        for(i=0;i<s1_len;i++)
        {
            count_s1[s1[i] - 'a']++;
            count_s2[s2[i] - 'a']++;
        }
        if(count_s1 == count_s2)
        {
            return true;
        }
        int k = s1_len;
        for(i=0; k < s2_len;i++,k++)
        {
            count_s2[s2[i] - 'a']--;
            count_s2[s2[k] - 'a']++;
            if(count_s1 == count_s2)
            {
                return true;
            }
            
        }
        return false;
    }
};