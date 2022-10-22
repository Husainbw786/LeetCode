class Solution {
public:
    int revNum(int str) {
       string s = to_string(str);
       reverse(s.begin(), s.end());
       int x = stoi(s);
        return x;
    }
    bool sumOfNumberAndReverse(int n) {
        for (int i=n/2; i <= n; i++) {
          int j = revNum(i);
          if (i + j == n) {
             return true;
          }
       }
       return false;

    }
};