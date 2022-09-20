class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int i;
        int len = indices.size();
        char arr[len];
        string ans = "";
        for(i=0;i<len;i++)
        {
            arr[indices[i]] = s[i];
        }
        for(i=0;i<len;i++)
        {
            ans += arr[i];
        }
        return ans;
    }
};