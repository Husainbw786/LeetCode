class Solution {
public:
    int kthFactor(int n, int k) {
        
        int i;
        vector<int>v;
        if(n == 1 && k == 1)
        {
            return 1;
        }
        
        for(i=1;i<=sqrt(n);i++)
        {
            if(n % i == 0 && i*i != n)
            {
               v.push_back(i);
               v.push_back(n/i);
            }
            else if(n % i == 0)
            {
                v.push_back(i);
            }
        }
        
        sort(v.begin(),v.end());
        
        if(v.size() < k)
        {
           return -1; 
        }
        return v[k-1];
        
    }
};