class Solution {
public:
    string multiply(string num1, string num2) {
        
        int n = num1.size();
        int m = num2.size();
        if( num1 == "0" || num2 == "0")
        {
            return "0";
        }
        vector<int>res(n+m,0);
        int i,j;
        for(i=n-1;i>=0;i--)
        {
            for(j=m-1;j>=0;j--)
            {
                res[i+j+1] += (num1[i] - '0') * (num2[j] - '0');
                res[i+j] += res[i+j+1] / 10;
                res[i+j+1] = res[i+j+1] % 10;
            }
        }
        i=0;
        string ans;
        while(res[i] == 0)
        {
            i++;
        }
        while(i < res.size())
        {
            ans += to_string(res[i]);
            i++;
        }
        return ans;
    }
};