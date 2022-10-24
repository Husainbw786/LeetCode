class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        unordered_map<char,int>mp;
        int i;
        for(i=0;i<text.size();i++)
        {
            mp[text[i]]++;
        }
        string ans = "balloon";
        int n = ans.size();
        int count = 0;
        while(true)
        {
           for(i=0;i<n;i++)
            {
               if(mp.find(ans[i]) != mp.end() && mp[ans[i]] > 0)
               {
                   mp[ans[i]]--;
                   continue;
               }
               else
               {
                   return count;
               }
            }
            count++;
        }
        return count;
        
        
    }
};