class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int>odd,even;
        int i;
        
        vector<int>v;
        while(num > 0)
        {
            int rem = num % 10;
            if(rem % 2 == 0)
            {
                even.push(rem);
            }
            else
            {
                odd.push(rem);
            }
            v.push_back(rem);
            num = num / 10;
        }
        reverse(v.begin(),v.end());
        int ans = 0;
        int n = v.size();
        for(i=0;i<n;i++)
        {
            if(v[i] % 2 == 0)
            {
                int top = even.top();
                even.pop();
                ans = ans *10 + top;
            }
            else
            {
                int top = odd.top();
                odd.pop();
                ans = ans *10 + top;
            }
        }
        return ans;
    }
};

   
    