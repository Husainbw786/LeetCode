class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        
      vector<long long>v;
      int a = 1;
      int b = 1;
      v.push_back(1);
      v.push_back(1);
      while(true)
      {
          int c = a+b;
          if(c > k)
          {
              break;
          }
          v.push_back(c);
          a = b;
          b = c;
      }
      int ans = 0;
      int i = v.size()-1;
      while(i >= 0)
      {
          if(v[i] <= k)
          {
              k = k-v[i];
              ans++;
          }
          if(k <= 0)
          {
              return ans;
          }
          i--;
      }
        return ans;
    }
};