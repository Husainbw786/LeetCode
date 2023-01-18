class Solution {
public:
    
    bool is_palindrome(int x)
    {
        string a = to_string(x);
        string b = to_string(x);
        reverse(a.begin(),a.end());
        if(a == b)
        {
            return true;
        }
        return false;
    }
    
    bool is_prime(int x)
    {
        if(x <= 1)
        {
            return false;
        }
        for(int i=2;i*i<=x;i++)
        {
            if(x % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    
    int primePalindrome(int n) {
     
        if(n == 1)
        {
          return 2;
        }
        if (99899*1e2 <= n && n <= 1e8)
        {
             return 100030001;
        }
        long long i;
        for(i=n;i<1e7;i++)
        {
            if(is_prime(i) && is_palindrome(i))
            {
                return i;
            }
        }
        return 0;
    }
};