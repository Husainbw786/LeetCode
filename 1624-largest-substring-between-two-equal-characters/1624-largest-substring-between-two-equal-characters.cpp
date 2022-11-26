class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        
        int maxi = 0;
        int n = s.size();
        int i,j;
        bool flag = false;
        for(i=0;i<n;i++)
        {
            string temp = "";
            char x = s[i];
            int count = 0;
            for(j=i+1;j<n;j++)
            {
                if(x != s[j])
                {
                    count++;
                }
                else
                {
                    flag = true;
                    maxi = max(maxi,count);
                    count++;
                }
            }
        }
        if(!flag)
        {
            return -1;
        }
        return maxi;
    }
};