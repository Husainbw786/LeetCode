class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        
        int i;
        int n = digits.size();
        vector<int>ans;
        vector<int>check(10,0);
        for(i=0;i<n;i++)
        {
            check[digits[i]]++;
        }
        for(i=100;i<999;i+=2)
        {
          
           vector<int>v(10,0);
            int num = i;
            string st = to_string(num);
            for(int j=0;j<st.size();j++)
            {
                int digit = st[j] - '0';
                v[digit]++;
            }
            bool flag = true;
            for(int k=0;k<10;k++)
            {
                if(v[k] > check[k])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};