class Solution {
public:
    int minOperations(string s) {
     
        int n = s.size();
        int i;
        int count1 = 0;
        int count2 = 0;
        for(i=0;i<n;i+=2)
        {
            if(s[i] != '0')
            {
                count1++;
            }
        }
        for(i=1;i<n;i+=2)
        {
            if(s[i] != '1')
            {
                count1++;
            }
        }
        for(i=0;i<n;i+=2)
        {
            if(s[i] != '1')
            {
                count2++;
            }
        }
        for(i=1;i<n;i+=2)
        {
            if(s[i] != '0')
            {
                count2++;
            }
        }
        return min(count1,count2);
    }
};