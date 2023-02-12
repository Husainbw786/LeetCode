class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0;
        int j = n-1;
       long long int ans = 0;
        while(i<=j)
        {
            int first = nums[i];
            int second = nums[j];
            if(i == j)
            {
                ans += nums[i];
                break;
            }
            vector<int>temp;
            while(second > 0)
            {
                int rem = second % 10;
                temp.push_back(rem);
                second = second / 10;
            }
            reverse(temp.begin(),temp.end());
            for(int j=0;j<temp.size();j++)
            {
                first = first*10 + temp[j];
            }
            ans += first;
            i++;
            j--;
        }
        return ans;
    }
};