class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int n = s.size();
        int i = 0;
        int j = 2;
        vector<string>st;
        vector<string>ans;
        int count = 0;
        for(i=0;i<n-2;i++)
        {
            string temp = "";
            int x = i;
            while(i <= j)
            {
                temp += s[i];
                 i++;
            }
            st.push_back(temp);
            j++;
            i = x ;
        }
        for(auto x : st)
        {
            string y = x;
            int count_arr[26] = {0};
            for(int j=0; j<y.size(); j++)
            {
                count_arr[y[j] - 'a']++;
            }
            bool flag = false;
            for(i=0;i<26;i++)
            {
                if(count_arr[i] > 1)
                {
                    flag = true;
                    break;
                }
            }
            
            if(!flag)
            {
                ans.push_back(y);
            }
        }
        return ans.size();
    }
};