class Solution {
public:
    int getMinSwaps(string num, int k) {
        
        string x = num;
        while(k--)
        {
            next_permutation(num.begin(),num.end());
        }
        
        int i;
        int ans = 0;
        for(i=0;i<num.size();i++)
        {
            if(x[i] != num[i])
            {
                int j = i+1;
                
                while(num[i] != x[j])
                {
                    j++;
                }
                
                while(j > i)
                {
                    swap(x[j],x[j-1]);
                    ans++;
                    j--;
                }
            }
        }
        
        return ans;
    }
};