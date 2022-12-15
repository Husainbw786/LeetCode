class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int i;
        int carry = 0;
        int n = num.size();
        vector<int>ans;
        i = n-1;
        while(k != 0 || i >= 0 || carry > 0)
        {
            if(k != 0)
            {
                carry += k % 10;
                k = k / 10;
            }
            if(i >= 0)
            {
                carry += num[i];
                i--;
            }
            ans.push_back(carry % 10);
            carry = carry / 10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};