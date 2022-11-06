class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        int i;
        int n = bank.size();
        vector<int>ans;
        for(i=0;i<n;i++)
        {
            string temp = bank[i];
            bool flag = false;
            int count1 = 0;
            for(int j=0;j<temp.size();j++)
            {
                if(temp[j] == '1')
                {
                    count1++;
                }
            }
           if(count1 > 0)
           {
               ans.push_back(count1);
           }
        }
        if(ans.size() == 0 || ans.size() == 1)
        {
           return 0;   
        }
        int rst = 0;
        for(i=0;i<ans.size()-1;i++)
        {
            rst += ans[i]*ans[i+1];
        }
        return rst;
    }
};