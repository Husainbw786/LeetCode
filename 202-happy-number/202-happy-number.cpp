class Solution {
public:
    bool isHappy(int n) {
      set<int>st;
        int val;
        int rem;
        while(1)
        {
            val = 0;
            while(n)
            {
                rem = n % 10;
                val += (rem*rem);
                n = n/10;
            }
            if(val == 1)
            {
                return true;
            }
            else if(st.find(val) != st.end())
            {
                return false;
            }
            st.insert(val);
            n = val;
        }
        return false;
    }
};