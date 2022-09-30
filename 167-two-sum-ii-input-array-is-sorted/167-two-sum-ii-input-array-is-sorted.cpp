class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int>v(2,0);
        int i = 0;
        int n = numbers.size();
        int j = n-1;
        while(i <= j)
        {
            int sum = numbers[i] + numbers[j];
            if(sum == target)
            {
                v[0] = i+1;
                v[1] = j+1;
                return v;
            }
            else if(sum > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return v;
    }
};