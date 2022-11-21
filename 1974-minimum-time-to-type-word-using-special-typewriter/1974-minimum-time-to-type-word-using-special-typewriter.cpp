class Solution {
public:
    int minTimeToType(string word) {
        
        char initail = 'a';
        int i;
        int ans = 0;
        int n = word.size();
        for(i=0;i<n;i++)
        {
            int dis = abs(word[i] - initail) % 26;
            ans += min(dis, 26 - dis) + 1;
            initail = word[i];
        }
        return ans;
    }
};