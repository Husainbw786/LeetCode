class Solution {
public:
    string largestOddNumber(string num) {
        
        int n = num.size();
        int i;
        string ans = "";
        for(i=n-1;i>=0;i--)
        {
            string temp;
            temp = num[i];
            int x = stoi(temp);
            if(x % 2 != 0)
            {
                while(i>=0)
                {
                    ans += num[i];
                    i--;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};