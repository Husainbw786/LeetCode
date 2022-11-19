class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dic) {
        
        int i;
        int n = queries.size();
        vector<string>ans;
        for(i=0;i<n;i++)
        {
            string temp = queries[i];
            for(int j=0;j<dic.size();j++)
            {
                string x = dic[j];
                int count = 0;
                for(int k=0;k<x.size();k++)
                {
                    if(temp[k] == x[k])
                    {
                        continue;
                    }
                    else
                    {
                        count++;
                    }
                }
                if(count > 2)
                {
                    continue;
                }
                else
                {
                    ans.push_back(temp);
                    break;
                }
            }
        }
        return ans;
    }
};