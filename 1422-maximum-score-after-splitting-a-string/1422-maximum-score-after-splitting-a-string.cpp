class Solution {
public:
    int maxScore(string s) {
        
        int count0 = 0;
        int count1 = 0;
        int i;
        int maxi = 0;
        string temp1 = "";
        string temp2 = "";
        int n = s.size();
        for(i=0;i<n-1;i++)
        {
            int x = 0;
            while(x <= i)
            {
               temp1 += s[x];
                x++;
            }
            for(int j=i+1;j<n;j++)
            {
                temp2 += s[j];            
            }
            for(int k=0;k<temp1.size();k++)
            {
                if(temp1[k] == '0')
                {
                    count0++;
                }
            }
            for(int k=0;k<temp2.size();k++)
            {
                if(temp2[k] == '1')
                {
                    count1++;
                }
            }
            temp1 = "";
            temp2 = "";
            int sum = count1 + count0;
            maxi = max(maxi,sum);
            count1 = 0;
            count0 = 0;
        }
        return maxi;
    }
};