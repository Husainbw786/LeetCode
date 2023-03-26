class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        
        vector<int>v;
        int x = numOnes;
        while(x--)
        {
            v.push_back(1);
        }
        x = numZeros;
        while(x--)
        {
            v.push_back(0);
        }
        x = numNegOnes;
        while(x--)
        {
            v.push_back(-1);
        }
        int sum = 0;
        for(int i=0;i<k;i++)
        {
            sum += v[i];
        }
        return sum;
    }
};