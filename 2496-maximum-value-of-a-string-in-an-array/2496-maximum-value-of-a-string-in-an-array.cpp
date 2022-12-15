class Solution {
public:
    int maximumValue(vector<string>& strs) {
        
        int i;
        int n = strs.size();
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            string temp = strs[i];
            bool flag = false;
            for(int j=0;j<temp.size();j++)
            {
                if(!isdigit(temp[j]))
                {
                   flag = true;
                   break;
                }
            }
             int x;
             if(!flag)
               {
                  x = stoi(temp);
               }
             else
               {
                    x = temp.size();
               }
             
              maxi = max(maxi,x);     
            
        }
      return maxi;
    }
};