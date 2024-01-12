class Solution {
public:
    long long minimumSteps(string s) {
     
    //"011100011101"


    int n = s.size();
        int i = 0;
        int j = 0;
        long long int count = 0;
        while(j < n)
        {
            if(s[i] == '1' && s[j] == '0')
            {
                swap(s[i],s[j]);
                count += j-i;
                i++;
            }
            else if(s[i] == '0')
            {
                i++;
                
            }
            j++;
        }
        return count;
    }
};