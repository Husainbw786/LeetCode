class Solution {
public:
    int alternateDigitSum(int n) {
        
        vector<int>ans;
        while(n != 0)
        {
            int rem = n % 10;
            ans.push_back(rem);
            n = n / 10;
        }
        reverse(ans.begin(),ans.end());
        int sum = 0;
        int count = 0;
        for(int i=0;i<ans.size();i++)
        {
            if(count % 2 != 0)
            {
                ans[i] = ans[i] * -1;
            }
            sum += ans[i];
            count++;
        }
        return sum;
    }
};