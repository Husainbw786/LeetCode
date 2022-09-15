class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
     
        if(s1.size() != s2.size())
        {
            return false;
        }
        if(s1 == s2)
        {
            return true;
        }
        string s3 = "";
        string s4 = "";
        int count = 0;
        int i;
        for(i=0;i<s1.size();i++)
        {
            if(s1[i] != s2[i])
            {
                count++;
                
                s3 = s3 + s1[i];
                s4 += s2[i]; 
            }
        }
        sort(s3.begin(),s3.end());
        sort(s4.begin(),s4.end());
            if(s3 == s4)
            {
                if(count == 2)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        return false;
    }
};