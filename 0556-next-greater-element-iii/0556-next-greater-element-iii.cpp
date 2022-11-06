class Solution {
public:
    int nextGreaterElement(int num) {
        string st = to_string(num);
        int n = st.size();
        int i = n-2;
        while(i >= 0 && st[i] >= st[i+1])
        {
            i--;
        }
        if(i < 0)
        {
            return -1;
        }
        int j = n-1;
        while(j > 0)
        {
            if(st[j] > st[i])
            {
                break;
            }
            j--;
        }
        swap(st[j],st[i]);
        reverse(st.begin() + i + 1, st.end());
        long long ans = stol(st);
        if(ans > INT_MAX || ans < INT_MIN)
            return -1;
        
        return ans;

    }
};