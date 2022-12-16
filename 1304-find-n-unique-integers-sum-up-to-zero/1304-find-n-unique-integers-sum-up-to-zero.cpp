class Solution {
public:
    vector<int> sumZero(int n) {
        
        int i;
        vector<int>v;
        int x = n;
        for(i=0;i<n/2;i++)
        {
            v.push_back(x);
            v.push_back(-x);
            x--;
        }
        if( n % 2 != 0)
        {
            v.push_back(0);
        }
        return v;
    }
};