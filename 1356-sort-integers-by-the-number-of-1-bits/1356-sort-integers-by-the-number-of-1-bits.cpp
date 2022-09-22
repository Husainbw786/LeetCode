class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        auto lambda = [](int &x, int &y) {
            int x_1 = __builtin_popcount(x);
            int y_1 = __builtin_popcount(y);
                
            if(x_1 == y_1)
                return x < y;
            
            return x_1<y_1;
        };
        
        sort(begin(arr), end(arr), lambda);
        return arr;
    }
};