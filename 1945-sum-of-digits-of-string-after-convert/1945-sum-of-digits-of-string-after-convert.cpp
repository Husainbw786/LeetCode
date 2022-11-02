class Solution {
public:
    int getLucky(string s, int k) {
        
        unordered_map<char,int>mp;
        int i;
        for(i=0;i<26;i++)
        {
            mp['a' + i] = i+1;
            
        }
        int temp;
        int n = s.size();
        int sum = 0;
        int mul = 10;
        for(i=0;i<n;i++)
        {
             temp = mp[s[i]];
             while(temp > 0)
             {
                 int rem = temp % 10;
                 sum += rem;
                 temp = temp / 10;
             }
           
        }
         int ans = sum;
        cout << ans << " ";
        k--;
        while(k--)
        {
            ans = 0;
            while(sum > 0)
            {
                int rem = sum % 10;
                ans += rem;
                sum = sum / 10;
            }
            sum = ans;
            
            
        }
        return ans;
    }
};