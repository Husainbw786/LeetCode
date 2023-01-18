class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        int temp = 0;
        int x = num;
        while(x)
        {
            int rem = x % 10;
            temp = temp*10 + rem;
            x = x / 10;
        }
        int temp2 = 0;
        while(temp)
        {
            int rem = temp % 10;
            temp2 = temp2*10 + rem;
            temp = temp / 10;
        }
        if(temp2 == num)
        {
            return true;
        }
        return false;
    }
};