class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        int i;
        bool flag = false;
        for(i=n-1;i>=0;i--)
        {
            if(digits[i] < 9)
            {
                digits[i] += 1; 
                flag = true;
                break;
            }
            else
            {
                digits[i] = 0;
            }
        }
        if(flag == false)
        {
        digits.push_back(1);
        reverse(digits.begin(),digits.end());
        }
        
        return digits;
    }
};