class Solution {
public:
    string decodeMessage(string key, string message) {
        
        unordered_map<char,char>mp;
        int n = key.size();
        char temp = 'a';
        int i;
        for(i=0;i<n;i++)
        {
            if(mp.find(key[i]) == mp.end() && key[i] != ' ')
            {
                mp[key[i]] = temp;
                temp++;
            }
        }
        string ans = "";
        for(i=0;i<message.size();i++)
        {
            if(mp.find(message[i]) != mp.end() && message[i] != ' ')
            {
                ans += mp[message[i]];
            }
            else
            {
                ans += " ";
            }
        }
        return ans;
    }
};