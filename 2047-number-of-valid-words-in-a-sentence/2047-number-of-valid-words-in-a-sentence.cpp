class Solution {
public:
    int countValidWords(string s) {
        
        int n = s.size();
        vector<string>v;
        int i;
        
        for(i=0;i<n;i++)
        {
            string temp = "";
            if(s[i] != ' ')
            {
                while(i < n && s[i] != ' ')
                {
                    temp += s[i];
                    i++;
                }
                v.push_back(temp);
                temp = "";
            }
        }
        int ans = 0;
        
        for(i=0;i<v.size();i++)
        {
            string temp = v[i];
            int c1 = 0;
            int c2 = 0;
             bool flag = false;
            for(int j=0;j<temp.size();j++)
            {
                if(temp[j] >= '0' && temp[j] <= '9')
                {
                    flag = true;
                    break;
                }
                else if(temp[0] == '-' || temp[temp.size()-1] == '-')
                {
                    flag = true;
                    break;
                }
                else if(temp[j] == '-' )
                {
                    c1++;
                    if(c1 > 1)
                    {
                        flag = true;
                        break; 
                    }
                }
                if(temp[j] == '!' || temp[j] == '.' || temp[j] == ',' )
                {
                    c2++;
                    if(c2 > 1)
                    {
                        flag = true;
                        break; 
                    }
                }
                if((temp[j] == '!' || temp[j] == '.' || temp[j] == ',') && j !=  temp.size()-1)
                {
                        flag = true;
                        break; 
                }
                if(temp[j] == '-' && (   (j-1 >= 0 && (!isalpha(temp[j-1])) || (j+1 < n && (!isalpha(temp[j+1]) )) )))
                  {
                      flag = true;
                      break;
                  }
            }
            if(!flag)
            {
                ans++;
            }
        }
        
        return ans;
    }
};
































