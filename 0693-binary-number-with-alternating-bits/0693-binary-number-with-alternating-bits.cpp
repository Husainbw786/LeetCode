class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        vector<int>v;
        while(n)
        {
            if(n & 1)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
            n = n >> 1;
        }
        
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i] == v[i+1])
            {
                return false;
            }
        }
        return true;
    }
};