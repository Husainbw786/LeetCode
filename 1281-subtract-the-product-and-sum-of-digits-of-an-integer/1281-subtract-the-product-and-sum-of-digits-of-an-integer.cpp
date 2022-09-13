class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int>v;
        long long pro = 1;
        int sum = 0;
        while(n > 0)
        {
            int rem = n % 10;
            pro = pro * rem;
            sum += rem;
            n = n/10;
        }
       
        return pro - sum;
    }
};