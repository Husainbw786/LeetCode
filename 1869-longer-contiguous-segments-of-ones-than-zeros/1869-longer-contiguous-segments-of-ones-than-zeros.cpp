class Solution {
public:
    bool checkZeroOnes(string s) {
        
        int n = s.size();
        int count0 = 0;
        int count1 = 0;
        int i;
        int max_zero = 0;
        int max_one = 0;
        if(s.size() == 1 && s[0] == '1')
        {
            return true;
        }
        
        for(i=0;i<n-1;i++)
        {
            count0 = 0;
            count1 = 0;
            while(s[i] == '0' && s[i+1] == '0')
            {
                count0++;
                i++;
            }
            max_zero = max(count0+1,max_zero);
            while(s[i] == '1' && s[i+1] == '1')
            {
                count1++;
                i++;
            }
            max_one = max(count1+1,max_one);
        }
        if(max_one > max_zero)
        {
            return true;
        }
        return false;
    }
};