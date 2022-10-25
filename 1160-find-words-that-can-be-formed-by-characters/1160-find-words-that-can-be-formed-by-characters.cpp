class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
     
        unordered_map<char,int>mp,mp2;
        int i;
        int n = chars.size();
        for(i=0;i<n;i++)
        {
            mp[chars[i]]++;
        }
        int ans = 0;
        int m = words.size();
        for(i=0;i<m;i++)
        {
            string temp = words[i];
            bool flag = false;
            int count = 0;
            mp2 = mp;
            for(int j=0;j<temp.size();j++)
            {
                if(mp2.find(temp[j]) != mp2.end() && mp2[temp[j]] > 0)
                {
                    count++;
                    mp2[temp[j]]--;
                }
            }
            if(count == temp.size())
            {
               ans += count; 
            }
        }
        return ans;
    }
};