class Solution {
public:
    string sortString(string s) {
     
        vector<int>count_arr(26,0);
        int i;
        int n = s.size();
        for(i=0;i<n;i++)
        {
          count_arr[s[i] - 'a']++;
        }
        string ans = "";
        int j = 0;
        while(j<n)
        {
            for(i=0;i<26;i++)
            {
                if(count_arr[i] > 0)
                {
                   ans += i + 'a';
                    count_arr[i]--;
                    j++;
                } 
            }
            for(i=25; i>=0;i--)
            {
               if(count_arr[i] > 0)
                {
                   ans += i + 'a';
                    count_arr[i]--;
                    j++;
                }
            }
        }
        return ans;
    }
};