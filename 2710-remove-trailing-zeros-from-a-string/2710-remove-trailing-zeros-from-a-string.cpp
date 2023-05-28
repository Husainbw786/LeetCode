class Solution {
public:
    string removeTrailingZeros(string num) {
        
         string ans = "";
        int n = num.size();
        bool flag = false;
        for(int i=n-1;i>=0;i--)
        {
            if(num[n-1] == '0' && !flag)
            {
                while(i >= 0 && num[i] == '0')
                {
                    i--;
                    continue;
                }
                i++;
                flag = true;
            }
            else
            {
                ans.push_back(num[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans; 
    }
};