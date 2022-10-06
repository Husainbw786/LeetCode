class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        int n = words.size();
        string ans  = "";
        int i;
        int count = 0;
        for(i=0;i<n;i++)
        {
            string temp = words[i];
            int m = words[i].size();
            int count = 0;
            for(int j=0;j<m/2;j++)
            {
                if(temp[j] == temp[m-1-j])
                {
                count++;
                }
                else
                {
                    break;
                }
            }
            if(count == (m/2))
            {
                ans = temp;
                break;
            }
        }
        return ans;
    }
};