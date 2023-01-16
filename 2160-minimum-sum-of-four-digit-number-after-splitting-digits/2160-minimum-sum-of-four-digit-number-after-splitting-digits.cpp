class Solution {
public:
    int minimumSum(int num) {
        
        int fourth_digit = num % 10;
        int first_digit = num / 1000;
        int second_digit = (num/100) % 10;
        int third_digit = (num % 100) / 10;
        
        vector<int>v;
        v.push_back(first_digit);
        v.push_back(fourth_digit);
        v.push_back(second_digit);
        v.push_back(third_digit);
        sort(v.begin(),v.end());
        int sum1 = 0;
        int sum2 = 0;
        sum1 = v[0];
        sum2 = v[1];
        sum1 = sum1*10 + v[2];
        sum2 = sum2*10 + v[3];
        return sum1 + sum2;
    }
};