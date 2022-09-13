class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int>v;
        while(n > 0)
        {
            int rem = n % 10;
            v.push_back(rem);
            n = n/10;
        }
        reverse(v.begin(),v.end());
        long long pro = 1;
        int sum = 0;
        int i;
        for( i=0;i<v.size();i++)
        {
            sum += v[i];
            pro *= v[i];
        }
        return pro - sum;
    }
};