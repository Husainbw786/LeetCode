class Solution {
public:
    
    string oddString(vector<string>& words) {
        
        vector<pair<vector<int>,int>>ans;
        int i,j;
        int n = words.size();
        for(i=0;i<n;i++)
        {
            string temp = words[i];
            int m = temp.size();
            vector<int>v;
            for(j=1;j<m;j++)
            {
                int x = temp[j] - 'a';
                int y = temp[j-1] - 'a';
                int push = x - y;
                v.push_back(push);
            }
            ans.push_back({v,i});
        }
        int p = 0;
        bool flag = false;
        for(i=0;i<ans.size()-2;i++)
        {
            if(ans[i].first != ans[i+1].first)
            {
                if(ans[i+1].first != ans[i+2].first)
                {
                    p = ans[i+1].second;
                    flag = true;
                    break;
                }
                else 
                {
                    flag = true;
                    p = ans[i].second;
                    break;
                }
            }
        }
        if(!flag)
        {
            if(ans[i].first != ans[i+1].first)
            {
                if(ans[i-1].first == ans[i].first)
                {
                    p = ans[i+1].second;
                    
                }
                else
                {
                    p = ans[i].second;
                    
                }
            }
        }
        string rst = words[p];
        return rst;

        
         
       
    }
};