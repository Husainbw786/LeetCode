class Solution {
public:
    string addBinary(string a, string b) {
     
        string ans = "";
        int alen = a.size();
        int blen = b.size();
        int i = 0;
        int carry = 0;
        while(i < alen || i < blen || carry != 0)
        {
            int x = 0;
            if(i < alen && a[alen-i-1] == '1')
            {
                x = 1;
            }
            int y = 0;
            if(i < blen && b[blen-i-1] == '1')
            {
                y = 1;
            }
            ans += to_string((x+y+carry) % 2);
            carry = (x+y+carry)/2;
            i++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};