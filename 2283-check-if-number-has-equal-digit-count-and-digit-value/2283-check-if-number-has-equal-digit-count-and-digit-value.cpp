class Solution {
public:
    bool digitCount(string num) {
        
        map<char,int>mp;
        int n = num.size();
        for(int i=0;i<n;i++)
        {
            string temp = "";
            temp += num[i];
            int x = stoi(temp);
            mp[x]++;
        }
        for(int i=0;i<n;i++)
        {
            string temp = "";
            temp += num[i];
            int x = stoi(temp);
            if(x != mp[i])
            {
                return false;
            }
        }
        return true;
    }
};