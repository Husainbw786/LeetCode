class Solution {
public:
    int maximum69Number (int num) {
     
        int i;
        vector<int>v;
        while(num > 0)
        {
            int rem = num % 10;
            v.push_back(rem);
            num = num /10;
        }
        reverse(v.begin(),v.end());
        int n = v.size();
        for(i=0;i<n;i++)
        {
            if(v[i] == 6)
            {
                v[i] = 9;
                break;
            }
        }
        int ans = 0;
        for(i=0;i<n;i++)
        {
            ans = ans * 10 + v[i];
        }
        return ans;
    }
};