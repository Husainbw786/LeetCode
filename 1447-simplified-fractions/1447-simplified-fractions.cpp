class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        
        int i,j;
        set<double>st;
        vector<string>ans;
        for(i=2;i<=n;i++)
        {
            for(j=1;j<i;j++)
            {
                string temp = "";
                double t = (double)j / (double)i;
                if(i % j == 0 && j != 1)
                {
                    continue;
                }
                else
                {
                    if(st.find(t)!=st.end())
                    {
                       continue; 
                    }
                    
                    temp="";
                    temp+=to_string(j);
                    temp+="/";
                    temp+=to_string(i);
                }
                st.insert(t);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};