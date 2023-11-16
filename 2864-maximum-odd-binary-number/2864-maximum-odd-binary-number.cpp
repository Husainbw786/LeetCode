class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int n = s.size();
        int i;
        int count1 = 0;
        int count2 = 0;
        for(i=0;i<n;i++)
        {
            if(s[i] == '0')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        string x = "";
        while(count2 != 1)
        {
            x += '1';
            count2--;
        }
        while(count1--)
        {
            x += '0';
        }
        x += '1';
        return x;
    }
};